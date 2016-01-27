/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 17:37:57 by banthony          #+#    #+#             */
/*   Updated: 2016/01/11 15:41:20 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

size_t	ft_lstlen(t_list *begin_list)
{
	size_t count;

	count = 1;
	if ((begin_list) == NULL)
		return (0);
	else
		while ((begin_list)->next != NULL)
		{
			(begin_list) = (begin_list)->next;
			count++;
		}
	return (count);
}
