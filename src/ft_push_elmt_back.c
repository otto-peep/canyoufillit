/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_elmt_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:08:55 by banthony          #+#    #+#             */
/*   Updated: 2016/01/04 15:45:55 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void	ft_push_elmt_back(p_list **begin_list, p_list *new)
{
	p_list *memory;

	memory = (*begin_list);
	while ((*begin_list)->next != NULL)
		*begin_list = (*begin_list)->next;
	(*begin_list)->next = new;
	*begin_list = memory;
}










