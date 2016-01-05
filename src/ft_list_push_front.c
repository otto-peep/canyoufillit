/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 23:45:43 by banthony          #+#    #+#             */
/*   Updated: 2016/01/04 14:12:05 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void	ft_list_push_front(p_list **begin_list, char const *str)
{
	p_list *new;

	new = ft_create_elmt(str, -62);
	new->next = *begin_list;
	*begin_list = new;
}
