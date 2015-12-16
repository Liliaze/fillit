/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:51:12 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:51:11 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dstp;
	const char	*srcp;
	size_t		n;
	size_t		dstl;

	dstp = dst;
	srcp = src;
	n = size;
	while (*dstp != 0 && n-- != 0)
		dstp++;
	dstl = dstp - dst;
	n = size - dstl;
	if (n == 0)
		return (dstl + ft_strlen(src));
	while (*srcp != 0 && size > 1)
	{
		if (n != 1)
		{
			*dstp++ = *srcp;
			n--;
		}
		srcp++;
	}
	*dstp = 0;
	return (dstl + (srcp - src));
}
