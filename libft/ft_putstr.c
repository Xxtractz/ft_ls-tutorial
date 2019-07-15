/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:25:17 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/01 17:21:10 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr(char const *s)
{
	if (s)
	{
		while (*s != '\0')
		{
			ft_putchar(*s);
			s++;
		}
	}
}

int		ft_putstr_ret_cnt(char *s)
{
	int		count;

	count = 0;
	if (s)
	{
		while (*s != '\0')
		{
			count += ft_putchar_ret_int(*s);
			s++;
		}
	}
	return (count);
}
