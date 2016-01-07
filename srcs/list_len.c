/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 07:57:23 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:14:41 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		list_len(t_tetri *first)
{
	int		i;
	t_tetri	*tmp;

	i = 0;
	tmp = first;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
