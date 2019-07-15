/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 16:51:43 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/09 15:21:30 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, len) == 0)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
