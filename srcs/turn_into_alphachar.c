/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turn_into_alphachar.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 02:41:12 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/17 13:43:20 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void	turn_into_alphachar(char (*pattern)[4][4], int pos)
{
	int i;
	int j;

	printf("Converting the # into %c\n", 'A'+pos);

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((*pattern)[i][j] == '#')
				(*pattern)[i][j] = 'A' + pos;
			j++;
		}
		i++;
	}

	int x = 0;
	int y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			printf("%c ", (*pattern)[x][y]);
			y++;
		}
		printf("\n");
		x++;
	}

	printf("\n");
}
