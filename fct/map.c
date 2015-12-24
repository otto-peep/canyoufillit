/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:21:52 by pconin            #+#    #+#             */
/*   Updated: 2015/12/24 20:33:50 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

void	update_map(int sqtall, char **map)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	free(map);
	map = NULL;
	ft_putstr("yo");
	if (!(map = (char **)malloc(sizeof(char *) * 21)))
		error(4);
	while (x <= 20)
	{
		y = -1;
		if (!(map[x] = ft_memalloc(21)))
			error(5);
		if (x < sqtall)
		{
			while (y++ < sqtall)
				map[x][y] = '.';
		}
		while (y < 20)
		{
			map[x][y] = '*';
			y++;
		}
		map[x][y] = '\0';
		x++;
	}
	ft_putstr(map[0]);
	map[x] = NULL;
	return ;
}
