/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:42:11 by mperronc          #+#    #+#             */
/*   Updated: 2015/11/26 17:24:11 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fs;
	char	*res;

	fs = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (fs == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	fs = ft_strcpy(fs, s);
	res = fs;
	while (*(fs + 1) != 0)
		fs++;
	while (*fs == ' ' || *fs == '\n' || *fs == '\t')
		fs--;
	*(fs + 1) = 0;
	return (res);
}
