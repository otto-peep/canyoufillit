/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:53:28 by pconin            #+#    #+#             */
/*   Updated: 2015/12/09 18:38:06 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*nxt;

	list = *alst;
	if (alst && del)
	{
		while (list)
		{
			nxt = list->next;
			del(list->content, list->content_size);
			free(list);
			list = nxt;
		}
	}
	*alst = NULL;
}
