/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:00:44 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:43:32 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*s;

	if (n == -2147483648)
		return ("-2147483648");
	s = (char *)malloc(sizeof(char) * (ft_intlen(n) + 2));
	if (s == NULL)
		return (NULL);
	sign = n;
	if (n == 0)
		return ("0");
	if (n < 0)
		n = -n;
	i = 0;
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (ft_strrev(s));
}
