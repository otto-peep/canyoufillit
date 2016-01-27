/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sqtall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 21:01:05 by pconin            #+#    #+#             */
/*   Updated: 2016/01/12 15:49:06 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int		ft_min_sqtall(t_list *tetri)
{
	int count;

	count = ft_lstlen(tetri);
	if (count == 1)
		return (2);
	if (count == 2)
		return (3);
	if (count > 2 && count < 5)
		return (4);
	if (count > 4 && count < 7)
		return (5);
	if (count > 6 && count < 10)
		return (6);
	if (count > 9 && count < 13)
		return (7);
	if (count > 12 && count < 17)
		return (8);
	if (count > 16 && count < 21)
		return (9);
	if (count > 20 && count < 26)
		return (10);
	else
		return (11);
}
