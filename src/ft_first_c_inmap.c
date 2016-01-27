/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_c_inmap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 19:08:18 by banthony          #+#    #+#             */
/*   Updated: 2016/01/11 15:06:57 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void	ft_first_c_inmap(char **map, int *i, int *j, char c)
{
	int	res_i;
	int	res_j;
	int bool;

	res_i = 0;
	res_j = 0;
	bool = 1;
	while (map[*i])
	{
		while (map[*i][*j])
		{
			if (map[*i][*j] == c)
			{
				if (*j < res_j || bool == 1)
					res_j = *j;
				while (bool++ == 1)
					res_i = *i;
			}
			*j = *j + 1;
		}
		*j = 0;
		*i = *i + 1;
	}
	*i = res_i;
	*j = res_j;
}
