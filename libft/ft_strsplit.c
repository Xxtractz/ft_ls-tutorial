/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 18:08:08 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/12 10:50:28 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_numstr(char const *s, char c)
{
	int		i;
	int		num;
	int		strcnt;

	i = 0;
	num = 0;
	strcnt = 0;
	if (!s || !c)
		return (0);
	while (s[i])
	{
		if (s[i] == c && strcnt == 1)
			strcnt = 0;
		if (s[i] != c && strcnt == 0)
		{
			num++;
			strcnt = 1;
		}
		i++;
	}
	return (num);
}

static	int		ft_wordlen(char const *s, int i, char c)
{
	int	n;

	n = 0;
	if (!s || !c)
		return (0);
	while (s[i] != c && s[i] != '\0')
	{
		n++;
		i++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	n = ft_numstr(s, c);
	if (!(split = (char **)malloc(sizeof(*split) * (n + 1))))
		return (NULL);
	while (n--)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		split[j] = ft_strsub(s, i, ft_wordlen(s, i, c));
		j++;
		i = i + ft_wordlen(s, i, c);
	}
	split[j] = NULL;
	return (split);
}
