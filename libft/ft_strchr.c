/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:54:48 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/01 18:28:12 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;

	a = c;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0' || str[i] == a)
	{
		if (str[i] == a)
		{
			return (i + str);
		}
		i++;
	}
	return (NULL);
}
