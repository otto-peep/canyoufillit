/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpieces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 13:17:28 by pconin            #+#    #+#             */
/*   Updated: 2016/01/12 17:07:44 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

char	**ft_print_in_map(char **map, int xm, int ym, t_list *tetri)
{
	char	**newmap;
	int		xt;
	int		yt;
	char	t;

	t = tetri->ascii;
	newmap = map;
	xt = 0;
	while (xt != 4)
	{
		yt = 0;
		while (yt != 4)
		{
			if (tetri->piece[xt][yt] != '.')
				map[xm][ym] = t;
			ym++;
			yt++;
		}
		ym = ym - 4;
		xm++;
		xt++;
	}
	return (newmap);
}

int		trytoprint(char **map, t_list *tetri, int sqtall)
{
	while (tetri->x < sqtall)
	{
		while (tetri->y < sqtall)
		{
			if (trytoprint2(map, tetri, tetri->x, tetri->y))
			{
				map = ft_print_in_map(map, tetri->x, tetri->y, tetri);
				return (2);
			}
			tetri->y++;
		}
		tetri->y = 0;
		tetri->x++;
	}
	return (0);
}

int		trytoprint2(char **map, t_list *tetri, int xm, int ym)
{
	int		xt;
	int		yt;

	xt = 0;
	while (xt != 4)
	{
		yt = 0;
		while (yt != 4)
		{
			if (map[xm][ym] == '.' || (map[xm][ym] != '.'
						&& tetri->piece[xt][yt] == '.'))
			{
				ym++;
				yt++;
			}
			else
				return (0);
		}
		ym = ym - 4;
		xm++;
		xt++;
	}
	return (1);
}
