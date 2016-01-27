/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 11:44:19 by pconin            #+#    #+#             */
/*   Updated: 2016/01/12 17:05:16 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

t_list	*reinit_tetri(t_list *tetri)
{
	t_list	*memory;

	memory = tetri;
	while (tetri)
	{
		tetri->x = 0;
		tetri->y = 0;
		tetri = tetri->next;
	}
	return (memory);
}

void	tetrizero(t_list *memory)
{
	memory->x = 0;
	memory->y = 0;
}
