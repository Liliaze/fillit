/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:08:44 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:51:10 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstp;
	const char	*srcp;

	dstp = dst;
	srcp = src;
	while (n > 0)
	{
		*dstp = *srcp;
		dstp++;
		srcp++;
		n--;
	}
	return (dst);
}
