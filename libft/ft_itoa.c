/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:14:40 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/12 11:12:40 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_abs(int nr)
{
	return (nr * ((nr < 0) * -1 + (nr > 0)));
}

int		ft_intlen(int len)
{
	int		i;

	i = 0;
	if (len == -2147483648)
		return (11);
	if (len < 0)
	{
		len = len * -1;
		i++;
	}
	while (len >= 10)
	{
		len /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*fresh;
	int		sign;
	int		len;

	sign = 1;
	len = ft_intlen(n);
	fresh = ft_strnew(len);
	if (fresh == NULL)
		return (NULL);
	fresh[0] = '0';
	fresh[len] = '\0';
	if (n < 0)
	{
		sign = -1;
		fresh[0] = '-';
	}
	len--;
	while (n)
	{
		fresh[len] = (((n % 10) * sign) + '0');
		len--;
		n = n / 10;
	}
	return (fresh);
}
