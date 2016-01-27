/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:21:52 by pconin            #+#    #+#             */
/*   Updated: 2016/01/12 16:58:05 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <stdlib.h>

void	update_map(int sqtall, char **map, t_list *memory, int *bool)
{
	int x;
	int y;

	x = 0;
	y = -1;
	while (x < sqtall)
	{
		y = -1;
		while (y++ < sqtall - 1 && x < sqtall)
		{
			if (map[x][y] >= memory->ascii)
				map[x][y] = '.';
		}
		x++;
	}
	if (memory->y == sqtall)
		memory->x++;
	if (memory->y < sqtall)
		memory->y++;
	*bool = 101;
}

char	**init_map(int sqtall, char **map)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	if (!(map = (char **)malloc(sizeof(char *) * 21)))
		ft_error();
	while (x < 20)
	{
		y = -1;
		if (!(map[x] = ft_memalloc(21)))
			ft_error();
		while (y++ < sqtall - 1 && x < sqtall)
			map[x][y] = '.';
		y--;
		while (y++ < 19)
			map[x][y] = '*';
		map[x][y] = '\0';
		x++;
	}
	map[20] = NULL;
	return (map);
}
