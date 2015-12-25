/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:15:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/25 17:06:06 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

void	ft_recur_resolution(int sqtall, char **map, p_list *tetri)
{

	map = update_map(sqtall, tetri->ascii, map);
	if (tetri != NULL)
	{
		ft_putstr("ira");
		while (tetri->x <= sqtall)
		{
			tetri->y = 0;
			while (tetri->y <= sqtall)
			{
				ft_putstr("hey");
				if (trytoprint(map, tetri, sqtall, tetri->x, tetri->y) == 1 && tetri->next != NULL)
				{
					ft_putstr("drac");
					ft_recur_resolution(sqtall, map, tetri->next);
				}
				else if (trytoprint(map, tetri, sqtall, tetri->x, tetri->y) == 1 && tetri->next == NULL)
				{
					ft_putstr("yo");
					ft_printandquit(map);
					return ;
				}
				else
				{
					ft_putstr("la");
					tetri->y = tetri->y + 1;
				}
			}
			tetri->x = tetri->x + 1;
		}
		
	}
	if (tetri->x == sqtall && tetri->y == sqtall)
	{
		map = init_map(sqtall++, map);
		ft_recur_resolution(sqtall, map, tetri);
		return ;
	}
}

void	resolution(p_list *tetri)
{
	char	**map;
	int		sqtall;

	sqtall = ft_min_sqtall(tetri);
	map = init_map(sqtall, map);
	ft_print_board(map);
	ft_recur_resolution(sqtall, map, tetri);
	return ;
}

