/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:54:19 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/09 15:21:26 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen(needle);
	if (n == 0)
		return ((char *)haystack);
	while (haystack[i] && i + n <= len)
	{
		if (ft_strncmp(&haystack[i], needle, n) == 0)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
