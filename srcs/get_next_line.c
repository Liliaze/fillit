/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:11:42 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 14:48:13 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../incl/fillit.h"

int		get_next_line(int const fd, char **line)
{
	char			*buf;
	int				i;
	int				r;
	char			c;

	buf = (char *)malloc(sizeof(char) * BUFF_SIZE);
	i = 0;
	c = 0;
	r = 1;
	while (c != 10 && r > 0)
	{
		r = read(fd, &c, 1);
		if (c != 10)
		{
			buf[i] = c;
			i++;
		}
	}
	buf[i] = 0;
	*line = ft_strdup(buf);
	free(buf);
	return (r);
}
