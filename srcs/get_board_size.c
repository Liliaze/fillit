/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:25:57 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 14:03:17 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_board_size(int n_pieces)
{
	int res;

	res = 2;
	while (res * res < n_pieces * 4)
		res++;
	return (res);
}
