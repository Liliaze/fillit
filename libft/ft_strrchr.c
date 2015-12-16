/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 20:29:58 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:59:54 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + n));
	while (n > 0)
	{
		n--;
		if (*(s + n) == (char)c)
			return ((char *)(s + n));
	}
	return (NULL);
}
