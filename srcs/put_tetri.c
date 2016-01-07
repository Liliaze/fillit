/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:19:52 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:15:02 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

char	**put_tetri(char **board, char pattern[4][4], int y, int x)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (pattern[i][j] != '.')
				board[i + y][j + x] = pattern[i][j];
			j++;
		}
		i++;
	}
	return (board);
}
