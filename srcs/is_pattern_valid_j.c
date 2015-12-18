/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid_j.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:34:26 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 20:31:53 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

static	int	fcase1(char *pattern, int offset)
{
	int i;

	i = 0;
	if (offset > 7 || (offset + 1) % 4 == 0)
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, ".#...#..##", 10) != 0)
		return (0);
	i = offset + 10;
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
	if (offset > 9 || (offset % 4 != 0 && (offset - 1) % 4 != 0))
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, "#...###", 7) != 0)
		return (0);
	i = offset + 7;
	while (i < 16)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

static	int	fcase3(char *pattern, int offset)
{
	int i;

	i = 0;
	if (offset > 9 || (offset % 4 != 0 && (offset - 1) % 4 != 0))
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, "###...#", 7) != 0)
		return (0);
	i = offset + 7;
	while (i < 16)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

static	int	fcase4(char *pattern, int offset)
{
	int i;

	i = 0;
	if (offset > 7 || (offset + 1) % 4 == 0)
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, "##..#...#", 9) != 0)
		return (0);
	i = offset + 9;
	while (i < 16)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		is_pattern_valid_j(char *pattern, int offset)
{
	int case1;
	int case2;
	int case3;
	int case4;

	case1 = fcase1(pattern, offset);
	case2 = fcase2(pattern, offset);
	case3 = fcase3(pattern, offset);
	case4 = fcase4(pattern, offset);
	return(case1 || case2);
}
