/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_get_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:09:45 by banthony          #+#    #+#             */
/*   Updated: 2015/12/16 16:22:45 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

p_list	*ft_list_last(p_list *begin_list)
{
	if ((begin_list) == NULL)
		return (0);
	else
		while ((begin_list)->next != NULL)
			(begin_list) = (begin_list)->next;
	return ((begin_list));
}
