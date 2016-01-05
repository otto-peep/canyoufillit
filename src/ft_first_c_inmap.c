/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_c_inmap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 19:08:18 by banthony          #+#    #+#             */
/*   Updated: 2015/12/18 17:41:59 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include "libft.h"

void	ft_first_c_inmap(char **map, size_t *i, size_t *j, char c)
{
	while (map[*i])
	{
		*j = 0;
		while (map[*i][*j])
		{
			if (map[*i][*j] == c)
				return;
			*j = *j + 1;
		}
		*i = *i + 1;
	}
}














