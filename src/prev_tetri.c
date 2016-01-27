/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prev_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 14:51:28 by pconin            #+#    #+#             */
/*   Updated: 2016/01/11 15:35:44 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

t_list	*prev_tetri(char c, t_list **begin_list)
{
	t_list	*finder;

	finder = *begin_list;
	while (finder->ascii != c - 1)
		finder = finder->next;
	return (finder);
}
