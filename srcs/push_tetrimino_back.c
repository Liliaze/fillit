/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_tetrimino_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:21:35 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/17 16:50:47 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void		push_tetrimino_back(t_tetri **first, char *pattern)
{
	t_tetri	*tmp;
	int		pos;

	printf("Pushing %s in the list...\n", pattern);

	if (*first == NULL)
	{
		printf("This the first piece !\n");
		*first = new_tetrimino(pattern, 0);
		printf("... and it's pushed !\n\n");
	}
	else
	{
		printf("There's already some pieces in the list.\n");
		tmp = *first;
		pos = 1;
		while (tmp->next)
		{
			tmp = tmp->next;
			pos++;
		}
		printf("Pushing piece %d into the list\n", pos);
		tmp->next = new_tetrimino(pattern, pos);
	}
}
