/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_tetrimino_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:21:35 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:15:00 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void		push_tetrimino_back(t_tetri **first, char *pattern)
{
	t_tetri	*tmp;
	int		pos;

	if (*first == NULL)
	{
		*first = new_tetrimino(pattern, 0);
	}
	else
	{
		tmp = *first;
		pos = 1;
		while (tmp->next)
		{
			tmp = tmp->next;
			pos++;
		}
		tmp->next = new_tetrimino(pattern, pos);
	}
}
