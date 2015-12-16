/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:04:31 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 14:48:13 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		is_pattern_valid(char *pattern)
{
	int		offset;

	if (ft_strlen(pattern) != 16)
		return (0);
	if (is_pattern_valid_dotsharp(pattern))
	{
		offset = get_offset(pattern);
		return (is_pattern_valid_o(pattern, offset) ||
				is_pattern_valid_i(pattern, offset) ||
				is_pattern_valid_s(pattern, offset) ||
				is_pattern_valid_z(pattern, offset) ||
				is_pattern_valid_t(pattern, offset) ||
				is_pattern_valid_l(pattern, offset) ||
				is_pattern_valid_j(pattern, offset));
	}
	return (0);
}
