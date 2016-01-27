/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 16:45:40 by banthony          #+#    #+#             */
/*   Updated: 2016/01/11 15:40:56 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

static void		ft_init_partcmp(int *i, int *j, int *i2, int *j2)
{
	*i = 0;
	*j = 0;
	*i2 = 0;
	*j2 = 0;
}

t_list			*ft_partcmp(t_list *new, t_list *index)
{
	int	i;
	int	j;
	int	i2;
	int	j2;
	int	count;

	count = 0;
	ft_init_partcmp(&i, &j, &i2, &j2);
	ft_first_c_inmap(new->piece, &i2, &j2, '#');
	while (index->piece[i] && new->piece[i2 + i])
	{
		while (index->piece[i][j] == new->piece[i2 + i][j2 + j])
		{
			if (index->piece[i][j] == '#' && new->piece[i2 + i][j2 + j] == '#')
				count++;
			if (new->piece[i2 + i][j2 + j] == '\n')
				break ;
			j++;
		}
		i++;
		j = 0;
	}
	if (count == 4)
		return (index);
	return (NULL);
}
