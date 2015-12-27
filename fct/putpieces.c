/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpieces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 13:17:28 by pconin            #+#    #+#             */
/*   Updated: 2015/12/27 20:55:05 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

char	**ft_print_in_map(char **map, int xm, int ym, p_list *tetri)
{
	char **newmap;
	int		xt;
	int		yt;
	
	xt = 0;
	while (xt != 4)
	{
		yt = 0;
		while (yt != 4)
		{
			if (tetri->piece[xt][yt] != '.')
				map[xm][ym] = tetri->piece[xt][yt];
			ym++;
			yt++;
		}
		ym = ym - 4;
		xm++;
		xt++;
	}
	return (newmap);
}

int		trytoprint(char **map, p_list *tetri, int sqtall, int xm, int ym)
{
	int		xt;
	int		yt;
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
			if (m == '.' || (m != '.' && t == '.'))
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
