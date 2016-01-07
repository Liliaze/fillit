/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:11:08 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/06 19:14:28 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void	free_board(char **board, int board_size)
{
	int		i;

	i = 0;
	while (i < board_size + 4)
	{
		free(board[i]);
		board[i] = NULL;
		i++;
	}
	free(board[i]);
	board[i] = NULL;
	free(board);
	board = NULL;
}
