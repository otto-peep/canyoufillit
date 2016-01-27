/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:00:04 by pconin            #+#    #+#             */
/*   Updated: 2016/01/12 17:20:09 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <stdlib.h>

static	int	len_sqtall(char **map)
{
	int	sqtall;

	sqtall = 0;
	while (map[sqtall][0] != '*')
		sqtall++;
	return (sqtall);
}

void		ft_printandquit(char **map)
{
	char	**mapsortie;
	int		x;
	int		y;
	int		sqtall;

	x = 0;
	sqtall = len_sqtall(map);
	if (!(mapsortie = (char **)malloc(sizeof(char *) * sqtall + 1)))
		ft_error();
	while (x < sqtall)
	{
		if (!(mapsortie[x] = (char *)malloc(sizeof(char) * sqtall + 1)))
			ft_error();
		y = 0;
		while (y < sqtall)
		{
			mapsortie[x][y] = map[x][y];
			y++;
		}
		mapsortie[x][y] = '\0';
		x++;
	}
	mapsortie[x] = NULL;
	ft_print_board(mapsortie);
	exit(0);
}

void		ft_print_board(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}
