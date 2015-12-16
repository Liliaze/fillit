/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:42:11 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:22:57 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strctrim(char const *s, char c)
{
	char	*fs;
	char	*res;

	fs = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (fs == NULL)
		return (NULL);
	while (*s == c)
		s++;
	fs = ft_strcpy(fs, s);
	res = fs;
	while (*(fs + 1) != 0)
		fs++;
	while (*fs == c)
		fs--;
	*(fs + 1) = 0;
	return (res);
}
