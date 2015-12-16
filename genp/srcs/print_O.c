/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_O.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:55:21 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/11 16:18:12 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/generator.h"

int		print_O(int offset)
{
	char	p1[] = "##..##";
	char	b[] = BLANK;

	if (offset >= 0 && offset <= 10 && (offset+1) % 4 != 0)
	{
		print_lns(ft_stricpy(b, p1, offset));
		return (1);
	}
	return (0);
}
