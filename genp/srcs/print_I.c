/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_I.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:56:05 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/11 16:17:42 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/generator.h"

int		print_I(int offset, int rotation)
{
	char	p1[] = "####";
	char	p2[] = "#...#...#...#";
	char	b[] = BLANK;

	if (rotation == 0)
	{
		if (offset >= 0 && offset <= 12 && offset % 4 == 0)
		{
			print_lns(ft_stricpy(b, p1, offset));
			return (1);
		}
	}
	else if (rotation == 1)
	{
		if (offset >= 0 && offset <= 3)
		{
			print_lns(ft_stricpy(b, p2, offset));
			return (1);
		}
	}
	return (0);
}
