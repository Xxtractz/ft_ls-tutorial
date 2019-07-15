/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 18:36:04 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/10 15:57:25 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;

	a = c;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	while (str[i] != str[0] || str[i] == a)
	{
		if (str[i] == a)
		{
			return (i + str);
		}
		i--;
	}
	return (NULL);
}
