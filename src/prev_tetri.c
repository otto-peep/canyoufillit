/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prev_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 14:51:28 by pconin            #+#    #+#             */
/*   Updated: 2016/01/05 15:04:51 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"

p_list	*prev_tetri(char c, p_list **begin_list)
{
	p_list	*finder;

	finder = *begin_list;
	while (finder->ascii != c - 1)
		finder = finder->next;
	return (finder);
}
