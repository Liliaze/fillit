/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:04:31 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 19:15:31 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		is_pattern_valid(char *pattern)
{
	int		offset;

	printf("Checking pattern validity...\n");

	if (ft_strlen(pattern) != 16)
	{
		printf ("Pattern length is not 16");
		return (0);
	}

	printf("Pattern length is valid\n");

	if (is_pattern_valid_dotsharp(pattern))
	{
		printf("Pattern is composed entirely of . and #\n");

		offset = get_offset(pattern);
		printf("Offset is %d\n\n", offset);

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
