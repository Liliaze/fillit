/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_me.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 08:01:04 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:22:58 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

t_board	*solve_me(t_tetri **piece, t_board *board)
{
	static int	solved = 0;
	int			i;
	int			j;

	i = -1;
	while (++i < board->size && solved == 0)
	{
		j = -1;
		while (++j < board->size && solved == 0)
		{
			if (can_place((*piece)->pattern, board, i, j))
			{
				board->grid = put_tetri(board->grid, (*piece)->pattern, i, j);
				if ((*piece)->next == NULL)
					solved = 1;
				else
					solve_me(&(*piece)->next, board);
			}
		}
	}
	if (solved == 0)
		erase_piece(board->grid, board->size, (*piece)->pos - 1);
	if (solved == 0 && (*piece)->pos == 0)
		return (NULL);
	return (board);
}
