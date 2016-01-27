/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_elmt_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:08:55 by banthony          #+#    #+#             */
/*   Updated: 2016/01/11 15:40:30 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void	ft_push_elmt_back(t_list **begin_list, t_list *new)
{
	t_list *memory;

	memory = (*begin_list);
	while ((*begin_list)->next != NULL)
		*begin_list = (*begin_list)->next;
	(*begin_list)->next = new;
	*begin_list = memory;
}
