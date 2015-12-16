/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 09:50:17 by mperronc          #+#    #+#             */
/*   Updated: 2015/11/24 19:33:08 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	len;
	char	*start;
	char	*end;
	char	temp;

	start = str;
	len = ft_strlen(str);
	end = &str[len - 1];
	while (str < end)
	{
		temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--;
	}
	str = start;
	return (str);
}
