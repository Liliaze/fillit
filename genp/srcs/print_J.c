/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_J.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:58:04 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/11 16:17:57 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/generator.h"

int		print_J(int offset, int rotation)
{
	char	p1[] = ".#...#..##";
	char	p2[] = "#...###";
	char	p3[] = "###...#";
	char	p4[] = "##..#...#";
	char	b[] = BLANK;

	if (rotation == 0)
	{
		if (offset >= 0 && offset <= 7 && (offset + 1) % 4 != 0)
		{
			print_lns(ft_stricpy(b, p1, offset));
			return (1);
		}
	}
	else if (rotation == 1)
	{
		if (offset >= 0 && offset <= 9 && (offset % 4 == 0 || (offset-1) % 4 == 0))
		{
			print_lns(ft_stricpy(b, p2, offset));
			return (1);
		}
	}
	else if (rotation == 2)
	{
		if (offset >= 0 && offset <= 9 && (offset % 4 == 0 || (offset-1) % 4 == 0))
		{
			print_lns(ft_stricpy(b, p3, offset));
			return (1);
		}
	}
	else if (rotation == 3)
	{
		if (offset >= 0 && offset <= 7 && (offset + 1) % 4 != 0)
		{
			print_lns(ft_stricpy(b, p4, offset));
			return (1);
		}
	}
	return (0);
}
