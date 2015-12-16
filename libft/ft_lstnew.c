/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:25:56 by mperronc          #+#    #+#             */
/*   Updated: 2015/11/27 20:08:52 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*flst;

	flst = (t_list *)malloc(sizeof(t_list));
	if (flst == NULL)
		return (NULL);
	if (content == NULL)
	{
		flst->content = NULL;
		flst->content_size = 0;
	}
	else
	{
		flst->content = malloc(content_size);
		ft_memcpy(flst->content, content, content_size);
		flst->content_size = content_size;
	}
	flst->next = NULL;
	return (flst);
}
