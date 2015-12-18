/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_me.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 08:01:04 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/17 17:10:42 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

char	**solve_me(t_tetri **piece, char **board, int board_size)
{
	static int solved = 0;
	int	i;
	int j;

	printf("Board size is %d\n", board_size);
	printf("Adress of piece is :%p\n\n", *piece);

	i = 0;
	while (i < board_size && solved == 0)
	{
		j = 0;
		while (j < board_size && solved == 0)
		{
			printf("Trying piece %d at pos %d,%d\n", (*piece)->pos, i, j);
			if (can_place((*piece)->pattern, board, i, j))
			{
				printf("%d,%d is free\n\n", i, j);
				board = put_tetri(board, (*piece)->pattern, i, j);
				if ((*piece)->next == NULL)
					solved = 1;
				else
					solve_me(&(*piece)->next, board, board_size);
			}
			j++;
		}
		i++;
	}
	return (board);
}
