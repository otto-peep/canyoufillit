/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 11:44:19 by pconin            #+#    #+#             */
/*   Updated: 2016/01/05 18:23:32 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"

p_list	*reinit_tetri(p_list *tetri)
{
	p_list	*memory;

	memory = tetri;
	tetri = tetri->next;
	while (tetri)
	{
		tetri->x = 0;
		tetri->y = 0;
		tetri = tetri->next;
	}
	return (memory);
}


