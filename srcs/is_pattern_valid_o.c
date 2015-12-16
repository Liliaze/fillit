/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid_o.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:11:22 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 14:53:25 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		is_pattern_valid_o(char *pattern, int offset)
{
	int i;

	i = 0;
	if (offset > 10 || (offset+1) % 4 == 0)
		return (0);
	while (i < offset)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	if (ft_strncmp(pattern + offset, "##..##", 6) != 0)
		return (0);
	i = offset + 6;
	while (i < 16)
	{
		if (pattern[i] != '.')
			return (0);
		i++;
	}
	return (1);
}
