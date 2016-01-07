/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:11 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/06 20:45:17 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../incl/fillit.h"

t_tetri	**ft_read_file(char *file_to_open, t_tetri **first)
{
	int		fd;
	int		ret;
	char	*tmp;
	int		i;

	fd = open(file_to_open, O_RDONLY);
	ret = 1;
	i = 0;
	while (ret > 0)
	{
		tmp = (char *)malloc(sizeof(char) * 21);
		ret = read(fd, tmp, 21);
		if (ret > 0)
		{
			if (check_symbols(tmp) == 0)
				return (NULL);
			tmp = ft_strnout(tmp);
			tmp = pattern_to_left_corner(tmp);
			push_tetrimino_back(first, tmp);
			i++;
		}
		free(tmp);
	}
	close(fd);
	return (first);
}
