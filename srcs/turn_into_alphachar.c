/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turn_into_alphachar.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 02:41:12 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:15:08 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void	turn_into_alphachar(char (*pattern)[4][4], int pos)
{
	int i;
	int j;

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
}
