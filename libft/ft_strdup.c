/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:50:39 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/01 18:01:34 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = ft_strlen((char *)s1);
	str = 0;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str != NULL)
	{
		ft_strcpy(str, s1);
	}
	return (str);
}
