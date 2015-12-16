/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid_i.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:34:11 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 14:53:25 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incl/fillit.h"
#include "../libft/libft.h"

static	int	fcase1(char *pattern, int offset)
{
	int i;

	i = 0;
	if (offset > 12 || offset % 4 != 0)
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, "####", 4) != 0)
		return (0);
	i = offset + 4;
	while (i < 16)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

static	int	fcase2(char *pattern, int offset)
{
	int i;

	i = 0;
	if (offset > 3)
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, "#...#...#....#", 13) != 0)
		return (0);
	i = offset + 3;
	while (i < 16)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		is_pattern_valid_i(char *pattern, int offset)
{
	int case1;
	int case2;

	case1 = fcase1(pattern, offset);
	case2 = fcase2(pattern, offset);
	return (case1 || case2);
}
