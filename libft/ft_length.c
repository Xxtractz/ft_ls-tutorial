/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:27:32 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/08/15 08:25:57 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

size_t	ft_wcharlen(unsigned wc)
{
	int i;

	i = 1;
	while ((wc >>= 1))
		i++;
	if (i > 7)
	{
		if (i > 11)
		{
			if (i > 16)
				return (4);
			else
				return (3);
		}
		return (2);
	}
	else
		return (1);
}

size_t	ft_wstrlen(unsigned *s)
{
	size_t	len;

	len = 0;
	while (*s != L'\0')
	{
		len += ft_wcharlen(*s);
		++s;
	}
	return (len);
}
