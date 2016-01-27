/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_sharp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:37:08 by banthony          #+#    #+#             */
/*   Updated: 2016/01/10 17:02:55 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void	ft_replace_sharp(char **piece, size_t rank)
{
	size_t	i;
	size_t	j;
	int		c;

	i = 0;
	j = 0;
	c = 'A';
	if (rank > 25)
		ft_error();
	while (piece[i])
	{
		j = 0;
		while (piece[i][j])
		{
			if (piece[i][j] == '#')
				piece[i][j] = c + rank;
			j++;
		}
		i++;
	}
}
