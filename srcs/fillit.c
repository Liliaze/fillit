/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:31:05 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/06 20:40:20 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

static t_board	*init_board(t_tetri *first, t_board *board)
{
	board = (t_board *)malloc(sizeof(t_board));
	board->size = get_board_size(list_len(first));
	board->grid = extend_board(NULL, board->size);
	return (board);
}

int				main(int ac, char **av)
{
	t_tetri	**first;
	t_board	*board;

	if (ac != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	first = (t_tetri **)malloc(sizeof(t_tetri *) * 26);
	*first = NULL;
	first = ft_read_file(av[1], first);
	if (first == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	board = NULL;
	board = init_board(*first, board);
	while (solve_me(first, board) == NULL)
	{
		board->size += 1;
		board->grid = extend_board(board->grid, board->size);
	}
	print_board(board->grid, board->size);
	exit(0);
}
