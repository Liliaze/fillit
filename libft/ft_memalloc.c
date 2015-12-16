/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:47:53 by mperronc          #+#    #+#             */
/*   Updated: 2015/11/24 12:07:35 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh_mem;

	fresh_mem = malloc(size);
	if (fresh_mem == NULL)
		return (NULL);
	ft_bzero(fresh_mem, size);
	return (fresh_mem);
}
