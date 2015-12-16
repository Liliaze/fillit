/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:03:29 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:59:54 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *ret;

	ret = dst;
	while (n > 0)
	{
		if (*src == 0)
		{
			*dst = 0;
			dst++;
			n--;
		}
		else
		{
			*dst = *src;
			dst++;
			src++;
			n--;
		}
	}
	return (ret);
}
