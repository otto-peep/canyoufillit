/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:47:27 by pconin            #+#    #+#             */
/*   Updated: 2015/12/10 16:54:01 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*rtlist;

	rtlist = (t_list *)malloc(sizeof(t_list));
	if (rtlist && content)
	{
		rtlist->content = (t_list *)malloc(sizeof(content));
		if (rtlist->content == NULL)
			return (NULL);
		ft_memcpy(rtlist->content, content, content_size);
		rtlist->content_size = content_size;
		rtlist->next = NULL;
	}
	if (rtlist && content == NULL)
	{
		rtlist->content = NULL;
		rtlist->content_size = 0;
		rtlist->next = NULL;
	}
	return (rtlist);
}
