/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:17:39 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/09 20:12:54 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Tool for the fillit project, generates random tetriminoes...
 * Outputs on the standard output, just redirect it to a file.
 * The output is always valid. */

#include "../incl/generator.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i = 0;
	int		ran;
	time_t	t;

	if (argc != 2)
		puts("Usage : ./generator N_PIECES");
	else
	{
		srand((unsigned) time(&t));
		while (i < atoi(argv[1]))
		{
			ran = rand() % 7;
			if (ran == 0)
				while (print_O(rand() % 12) == 0) {}
			else if (ran == 1)
				while (print_I(rand() % 2, rand() % 12) == 0) {}
			else if (ran == 2)
				while (print_S(rand() % 2, rand() % 12) == 0) {}
			else if (ran == 3)
				while (print_Z(rand() % 2, rand() % 12) == 0) {}
			else if (ran == 4)
				while (print_T(rand() % 4, rand() % 12) == 0) {}
			else if (ran == 5)
				while (print_L(rand() % 4, rand() % 12) == 0) {}
			else if (ran == 6)
				while (print_J(rand() % 4, rand() % 12) == 0) {}
			i++;
		}
	}
}
