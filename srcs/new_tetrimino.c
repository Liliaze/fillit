/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_tetrimino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:20:29 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 14:48:13 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

t_tetri		*new_tetrimino(char *pattern, int pos)
{
	t_tetri		*new_tetri;
	int			i;
	int			j;

	new_tetri = (t_tetri *)malloc(sizeof(t_tetri));
	if (new_tetri == NULL)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (pattern[j < 4])
		{
			new_tetri->pattern[i][j] = pattern[i * 4 + j];
			j++;
		}
		i++;
	}
	new_tetri->size_x = j;
	new_tetri->size_y = i;
	new_tetri->pos = pos;
	new_tetri->next = NULL;
	turn_into_alphachar(&(new_tetri->pattern), pos);
	return (new_tetri);
}
