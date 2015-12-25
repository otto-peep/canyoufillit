/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpieces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 13:17:28 by pconin            #+#    #+#             */
/*   Updated: 2015/12/25 16:06:23 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

char	**ft_print_in_map(char **map, char t, int xm, int ym)
{
	char **newmap;

	newmap = map;
	newmap[xm][ym] = t;
	return (newmap);
}

int		trytoprint(char **map, p_list *tetri, int sqtall, int xm, int ym)
{
	int		xt;
	int		yt;
	char	yd;
	char	m;
	char	t;

	
	xt = 0;
	while (xt != 4)
	{
		yt = 0;
		while (yt != 4)
		{
			m = map[xm][ym];
			t = tetri->piece[xt][yt];
			if (m == '.' ||
				(m != '.' && t == '.'))
				map = ft_print_in_map(map, t, xm, ym);
			else
				return (0);
			ym++;
			yt++;
		}
		ym = ym - 4;
		xm++;
		xt++;
	}
	return (1);
}
