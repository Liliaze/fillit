/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:46:01 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:59:54 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	get_tab_len(char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 1;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			len++;
		}
		i++;
	}
	return (len + 1);
}

static size_t	get_str_len(char const *s, char c)
{
	size_t		res;
	const char	*sp;

	sp = s;
	res = 0;
	while (*sp != c && *sp != 0)
	{
		sp++;
		res++;
	}
	return (res + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*fs;
	int		x;
	int		y;

	fs = ft_strctrim(s, c);
	tab = (char **)malloc(sizeof(char *) * get_tab_len(s, c));
	y = 0;
	x = 0;
	while (*fs)
	{
		if (*fs == c)
		{
			while (*fs == c)
				fs++;
			tab[y++][x] = 0;
			x = 0;
		}
		if (x == 0)
			tab[y] = ft_strnew(get_str_len(fs, c));
		tab[y][x++] = *fs;
		fs++;
	}
	tab[++y] = 0;
	return (tab);
}
