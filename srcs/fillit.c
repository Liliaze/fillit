/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:31:05 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/17 17:00:35 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		main(int ac, char **av)
{
	t_tetri	**first;
	char	**board;
	int		board_size;

	printf("Entering fillit...\n");

	if (ac != 2)
	{
		ft_putstr("Invalid number of arguments\n");
		return (0);
	}

	first = (t_tetri **)malloc(sizeof(t_tetri *) * 26);
	*first = NULL;
	first = ft_read_file(av[1], first);

	if (first == NULL)
	{
		printf("The file appears to be invalid\n");
		return (0);
	}

	board_size = get_board_size(list_len(*first));
	printf("There is %d pieces in the list\n", list_len(*first));

	printf("Allocating the board ... ");
	board = extend_board(NULL, board_size);
	printf("done.\n\n");

	printf("Starting resolution algorithm...\n\n");
	while(solve_me(first, board, board_size) == NULL && board_size < 4)
		board = extend_board(board, ++board_size);

	int i = 0;
	while (board[i])
	{
		ft_putstr(board[i++]);
		ft_putchar('\n');
	}
	return (0);
}
