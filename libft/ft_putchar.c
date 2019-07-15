/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:56:50 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/11 09:41:40 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putchar_ret_int(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar_iter(int i, char c)
{
	while (i--)
		ft_putchar(c);
}
