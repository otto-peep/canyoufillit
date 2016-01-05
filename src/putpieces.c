/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpieces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 13:17:28 by pconin            #+#    #+#             */
/*   Updated: 2016/01/05 13:52:32 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"

char	**ft_print_in_map(char **map, int xm, int ym, p_list *tetri)
{
	char **newmap;
	int		xt;
	int		yt;
	char t;

	t = tetri->ascii;
//	ft_putstr("\nimhere\n");
//	ft_putchar(t);
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

int		trytoprint(char **map, p_list *tetri, int sqtall, int xm, int ym)
{
	int		xt;
	int		yt;
	char	m;
	char	t;

	xt = 0;
//	ft_putnbr(xm);
//	ft_putnbr(ym);
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
			{
//				ft_putnbr(xm);
//				ft_putnbr(ym);
//				ft_putstr("yo");
				return (0);
			}
		}
		ym = ym - 4;
		xm++;
		xt++;
	}
	return (1);
}
