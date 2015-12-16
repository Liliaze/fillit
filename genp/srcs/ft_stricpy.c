/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stricpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:01:39 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/11 16:17:29 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/generator.h"

char	*ft_stricpy(char *dst, char *src, int index)
{
	char *res = dst;
	while (index--)
		dst++;
	while (*src)
		*dst++ = *src++;
	return (res);
}
