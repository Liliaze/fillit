/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 11:02:07 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/18 12:08:58 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		check_link(char *pattern, int i, int nb_appel)
{
	static int link;

	if (nb_appel == 0)
		link = 0;
	if (pattern[i + 1] == '#')
		link++;
	if (pattern[i - 1] == '#')
		link++;
	if (pattern[i + 5] == '#')
		link++;
	if (pattern[i - 5] == '#')
		link++;
	return (link);
}

int		check_symbols(char *pattern)
{
	int		n;
	int		pt;
	int		d;
	int		error;
	int		link;

	n = 0;
	pt = 0;
	d = 0;
	error = 0;
	link = 0;
	while (pattern[n + pt + d + error])
	{
		if (pattern[n + pt + d + error] == '.')
			pt++;
		else if (pattern[n + pt + d + error] == '\n')
			n++;
		else if (pattern[n + pt + d + error] == '#')
		{
			link = check_link(pattern, d + pt + n + error, d);
			d++;
		}
		else
			error++;
	}
	if (n == 4 && d == 4 && pt == 12 && error == 0 && link >= 6)
		return (1);
	return (0);
}
