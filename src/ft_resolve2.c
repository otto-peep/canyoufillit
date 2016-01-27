/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:46:14 by banthony          #+#    #+#             */
/*   Updated: 2016/01/24 18:46:22 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void	ft_resolve2(int sqtall, t_list **tetri, char **map, int bool)
{
	t_list *memory;

	memory = (*tetri);
	while (memory)
	{
		bool = trytoprint(map, memory, sqtall);
		if (bool != 2 && memory->ascii != 'A')
		{
			tetrizero(memory);
			memory = prev_tetri(memory->ascii, tetri);
			update_map(sqtall, map, memory, &bool);
		}
		if (bool == 0 && (memory)->ascii == 'A')
			break ;
		else if (bool != 101)
			memory = (memory)->next;
	}
	if (bool != 2 && bool != 101)
	{
		memory = reinit_tetri(*tetri);
		ft_increase_map(map, &sqtall);
	}
	if (bool != 2)
		ft_resolve2(sqtall, &memory, map, 1);
	return ;
}
