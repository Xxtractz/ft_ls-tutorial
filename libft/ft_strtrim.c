/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:17:19 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/09 17:42:23 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*fresh;
	int		n;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_strnew(1), ""));
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (!(fresh = ft_strnew(len - i + 1)))
		return (NULL);
	while (i <= len)
		fresh[n++] = s[i++];
	fresh[n] = '\0';
	return (fresh);
}
