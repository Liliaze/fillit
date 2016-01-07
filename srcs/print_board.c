/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:01:57 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:14:53 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../incl/fillit.h"

void	print_board(char **board, int board_size)
{
	int i;
	int j;

	i = 0;
	while (i < board_size)
	{
		j = 0;
		while (j < board_size)
		{
			ft_putchar(board[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
