/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:15:31 by pconin            #+#    #+#             */
/*   Updated: 2016/01/05 15:03:22 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"

void	ft_recur_resolution(int sqtall, char **map, p_list *tetri, p_list **begin_list)
{
	p_list *memtetri;

	memtetri = tetri;
	tetri->next = reinit_tetri(tetri);
	map = update_map(sqtall, tetri->ascii, map);
	if (trytoprint(map, tetri, sqtall, tetri->x, tetri->y) == 1 && tetri->next == NULL)
	{
		map = ft_print_in_map(map, tetri->x, tetri->y, tetri);
		ft_printandquit(map);
		return ;
	}
	while (!(tetri->ascii == 'A' && tetri->x == sqtall && tetri->y == sqtall))
	{
		while (tetri->x < sqtall)
		{
			tetri->y = 0;
			while (tetri->y < sqtall)
			{
				if (trytoprint(map, tetri, sqtall, tetri->x, tetri->y) == 1 && tetri->next == NULL)
				{
					map = ft_print_in_map(map, tetri->x, tetri->y, tetri);
					ft_printandquit(map);
					return ;
				}
				else if (trytoprint(map, tetri, sqtall, tetri->x, tetri->y) == 1 && tetri->next != NULL)
				{
					map = ft_print_in_map(map, tetri->x, tetri->y, tetri);
					ft_recur_resolution(sqtall, map, tetri->next, begin_list);
					return ;
				}
				else
					tetri->y++;
			}
			tetri->x++;
		}
		while (tetri->x == sqtall && tetri->y == sqtall && tetri->ascii != 'A')
		{
			tetri = prev_tetri(tetri->ascii, begin_list);
		}
		if (tetri->y < sqtall)
			tetri->y++;
		if (tetri->x < sqtall)
			tetri->x++;
		ft_recur_resolution(sqtall, map, tetri, begin_list);
	}
	resolution (*begin_list, sqtall++);
}

void	resolution(p_list *tetri, int sqtall)
{
	char	**map;
	char t;

	map = NULL;
	map = init_map(sqtall, map);
	tetri = reinit_tetri(tetri);
	t = tetri->ascii;
	ft_recur_resolution(sqtall, map, tetri, &tetri);
	return ;
}

void	find_sqtall(p_list *tetri)
{
	int	sqtall;

	sqtall = ft_min_sqtall(tetri);
	resolution(tetri, sqtall);
}
