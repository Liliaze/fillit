/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnout.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:37:27 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/06 19:14:36 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

char	*ft_strnout(char *src)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * 17);
	i = 0;
	while (*src)
	{
		if (*src != '\n')
		{
			ret[i] = *src;
			i++;
		}
		src++;
	}
	ret[i] = 0;
	return (ret);
}
