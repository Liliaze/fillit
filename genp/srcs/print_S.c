/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_S.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:58:04 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/11 16:18:26 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/generator.h"

int		print_S(int offset, int rotation)
{
	char	p1[] = "#...##...#";
	char	p2[] = ".##.##";
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
	return (0);
}
