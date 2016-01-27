/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increase_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:58:45 by banthony          #+#    #+#             */
/*   Updated: 2016/01/13 12:52:46 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_increase_map(char **map, int *sqtall)
{
	int i;

	i = 0;
	while (i < *sqtall)
	{
		map[*sqtall][i] = '.';
		map[i][*sqtall] = '.';
		i++;
	}
	map[*sqtall][i] = '.';
	*sqtall = *sqtall + 1;
}
