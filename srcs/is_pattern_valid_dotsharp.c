/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid_dotsharp.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:10:34 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 19:13:29 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		is_pattern_valid_dotsharp(char *pattern)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (pattern[i] != '.' && pattern[i] != '#')
			return (0);
		i++;
	}
	return (1);
}
