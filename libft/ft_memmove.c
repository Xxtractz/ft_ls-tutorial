/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:25:16 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/01 16:49:38 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	if (str2 < str1)
	{
		while (len--)
		{
			str1[len] = str2[len];
		}
	}
	else
	{
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dst);
}
