/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnout.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:37:27 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/16 20:31:53 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

void	ft_strnout(char *dest, char *src)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (src[i])
	{
		if (src[i] != '\n')
		{
			dest[i2] = src[i];
			i2++;
		}
		i++;
	}
	dest[i2] = '\0';
}
