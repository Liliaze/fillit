/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:36:57 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:59:54 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fs;
	char	*res;

	fs = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (fs == NULL)
		return (NULL);
	res = fs;
	i = 0;
	while (*s != 0)
	{
		*fs = (*f)(i, *s);
		fs++;
		s++;
		i++;
	}
	return (res);
}
