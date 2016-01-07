/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 17:21:03 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:14:57 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void	print_list(t_tetri *first)
{
	int i;
	int j;

	while (first)
	{
		i = 0;
		ft_putstr("Piece no. ");
		ft_putnbr(first->pos);
		ft_putchar('\n');
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				ft_putchar(first->pattern[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
		ft_putchar('\n');
		first = first->next;
	}
}
