/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:53:03 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/08/15 08:24:53 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_abs_l(long num)
{
	return (num * ((num < 0) * -1 + (num > 0)));
}

void	ft_putnbr_long_neg(long n)
{
	if (n == -9223372036854775807 - 1)
		ft_putstr("9223372036854775808");
	else
	{
		if (n < 0)
		{
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_long(n / 10);
			ft_putnbr_long(n % 10);
		}
		else
			ft_putchar(n + 48);
	}
}

void	ft_putnbr_long(long n)
{
	if (n == -9223372036854775807 - 1)
		ft_putstr("-9223372036854775808");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_long(n / 10);
			ft_putnbr_long(n % 10);
		}
		else
			ft_putchar(n + 48);
	}
}

void	ft_putnbr_long_long(unsigned long long n)
{
	if (n > 9)
	{
		ft_putnbr_long_long(n / 10);
		ft_putnbr_long_long(n % 10);
	}
	else
		ft_putchar(n + 48);
}
