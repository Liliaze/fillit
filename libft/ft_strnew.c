/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:59:33 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 17:14:21 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh_str;

	fresh_str = (char *)malloc(sizeof(char) * size + 1);
	if (fresh_str == 0)
		return (NULL);
	ft_bzero(fresh_str, size + 1);
	return (fresh_str);
}
