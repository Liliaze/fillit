/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_with_dot.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:07:07 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/16 14:48:13 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

char	*ft_strnew_with_dot(char *new_boardline, int size)
{
	int		i;

	i = 0;
	new_boardline = (char *)malloc(sizeof(char) * (size + 4));
	while (i < size + 4)
	{
		new_boardline[i] = '.';
		i++;
	}
	new_boardline[i] = 0;
	return (new_boardline);
}
