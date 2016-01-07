/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_with_dot.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:07:07 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/06 19:14:33 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

char	*ft_strnew_with_dot(int size)
{
	int		i;
	char	*new_line;

	i = 0;
	new_line = (char *)malloc(sizeof(char) * (size + 5));
	while (i < size + 4)
	{
		new_line[i] = '.';
		i++;
	}
	new_line[i] = 0;
	return (new_line);
}
