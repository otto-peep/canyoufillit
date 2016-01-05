/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 11:44:19 by pconin            #+#    #+#             */
/*   Updated: 2016/01/05 15:03:42 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"

p_list	*reinit_tetri(p_list *tetri)
{
	p_list	*memory;

	memory = tetri;
	ft_putstr("wass");
	while (tetri)
	{
		tetri->x = 0;
		tetri->y = 0;
		tetri = tetri->next;
	}
	return (memory);
}


