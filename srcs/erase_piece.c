/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:17:33 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:14:09 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void	erase_piece(char **board, int board_size, int pos)
{
	int		i;
	int		j;
	char	c;

	c = 'A' + pos;
	i = 0;
	while (i < board_size + 4)
	{
		j = 0;
		while (j < board_size + 4)
		{
			if (board[i][j] == c)
				board[i][j] = '.';
			j++;
		}
		i++;
	}
}
