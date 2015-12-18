/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:11 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/18 12:06:53 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../incl/fillit.h"

t_tetri	**ft_read_file(char *file_to_open, t_tetri **first)
{
	int		fd;
	int		ret;
	char	*tmp;
	char	*pattern;

	printf("Reading file...\n");

	fd = open(file_to_open, O_RDONLY);
	printf("Opened file %s successfully.\n\n", file_to_open);

	tmp = (char *)malloc(sizeof(char) * 21);
	pattern = (char *)malloc(sizeof(char) * 16);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, tmp, 21);
		if (ret > 0)
		{
			printf("ret is %d\n", ret);
			tmp[20] = '\0';
			printf("Reading :\n%s\n", tmp);
			if (check_symbols(tmp) == 0)
			{
				printf("%s is treated as invalid.\n\n", pattern);
				return (NULL);
			}
			ft_strnout(pattern, tmp);
			printf("Treated as :\n%s\n\n", pattern);
			printf("%s is valid !\n\n", pattern);
			printf("Moving the piece in the left corner... ");
			pattern = pattern_to_left_corner(pattern);
			printf(" done.\n");
			push_tetrimino_back(first, pattern);
		}
	}

	free(tmp);
	free(pattern);
	close(fd);
	return (first);
}
