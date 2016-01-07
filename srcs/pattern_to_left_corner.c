/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern_to_left_corner.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 06:32:43 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:14:49 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

static void	up(char *pattern)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * 17);
	ft_strncpy(tmp, &(pattern[4]), 12);
	ft_strncat(tmp, "....", 4);
	ft_strcpy(pattern, tmp);
	free(tmp);
}

static void	left(char *pattern)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * 17);
	i = 0;
	while (i < 4)
	{
		ft_strncpy(&(tmp[i * 4]), &(pattern[i * 4 + 1]), 3);
		tmp[(i * 4) + 3] = '.';
		i++;
	}
	ft_strcpy(pattern, tmp);
	free(tmp);
}

char		*pattern_to_left_corner(char *pattern)
{
	int i;

	i = 0;
	while (i < 3)
	{
		if (pattern[0] == '.' && pattern[1] == '.' &&
			pattern[2] == '.' && pattern[3] == '.')
		{
			up(pattern);
		}
		i++;
	}
	i = 0;
	while (i < 3)
	{
		if (pattern[0] == '.' && pattern[4] == '.' &&
			pattern[8] == '.' && pattern[12] == '.')
		{
			left(pattern);
		}
		i++;
	}
	return (pattern);
}
