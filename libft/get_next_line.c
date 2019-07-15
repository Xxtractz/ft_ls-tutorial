/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <mbaloyi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:43:09 by mbaloyi           #+#    #+#             */
/*   Updated: 2019/07/15 17:55:43 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		read_from_buff(int const fd, char **store)
{
	int		byte_read;
	char	buff[BUFF_SIZE + 1];
	char	*temp;

	if ((byte_read = read(fd, buff, BUFF_SIZE)) >= 0)
	{
		buff[byte_read] = '\0';
		if (!(temp = ft_strjoin(*store, buff)))
			return (-1);
		free(*store);
		*store = temp;
		return (byte_read);
	}
	return (-1);
}

int		from_store_to_line(char **line, char **store, int const ret)
{
	char	*temp;
	size_t	len;

	temp = ft_strchr(*store, '\n');
	if (ret == BUFF_SIZE)
		if (temp == NULL)
			return (0);
	if (temp == NULL)
	{
		*line = ft_strsub(*store, 0, ft_strlen(*store));
		ft_strclr(*store);
	}
	else
	{
		len = temp - *store;
		*line = ft_strsub(*store, 0, len);
		ft_memmove(*store, temp + 1, ft_strlen(temp));
	}
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	static	char	*store = NULL;
	int				ret_read_buff;
	int				ret_read_line;

	if (store == NULL)
		if (!(store = ft_strnew(BUFF_SIZE + 1)))
			return (-1);
	if (fd < 0)
		return (-1);
	if ((ret_read_buff = read_from_buff(fd, &store)) >= 0)
	{
		if (ret_read_buff == 0)
			if (ft_strlen(store) == 0)
				return (0);
		ret_read_line = from_store_to_line(line, &store, ret_read_buff);
		if (ret_read_line == 0)
			get_next_line(fd, line);
	}
	else
		return (-1);
	return (1);
}
