/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_wchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:03:02 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/08/15 08:26:42 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_nrbyte(int nb)
{
	int i;

	i = 1;
	while ((nb >>= 1))
		i++;
	return (i);
}

static void	ft_write(int fd, int c)
{
	write(fd, &c, 1);
}

void		ft_put_wchar_fd(int c, int fd)
{
	int nrb;

	nrb = ft_nrbyte(c);
	if (nrb > 7)
	{
		if (nrb > 11)
		{
			if (nrb > 16)
			{
				ft_write(fd, (((c >> 18) & 7) | 240));
				ft_write(fd, (((c >> 12) & 63) | 128));
			}
			else
				ft_write(fd, (((c >> 12) & 15) | 224));
			ft_write(fd, (((c >> 6) & 63) | 128));
		}
		else
			ft_write(fd, (((c >> 6) & 31) | 192));
		ft_write(fd, ((c & 63) | 128));
	}
	else
		ft_write(fd, c);
}

void		ft_put_wchar(int c)
{
	ft_put_wchar_fd(c, 1);
}
