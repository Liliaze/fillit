/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:30:03 by mperronc          #+#    #+#             */
/*   Updated: 2015/11/24 21:01:35 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fs;

	fs = (char *)malloc(sizeof(char) * len + 1);
	if (fs == NULL)
		return (NULL);
	fs = ft_strncpy(fs, s + start, len);
	return (fs);
}
