/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:38:56 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/09 13:32:11 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = malloc(sizeof(void) * size);
	if (!(fresh))
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
