/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:00:04 by pconin            #+#    #+#             */
/*   Updated: 2016/01/04 15:18:25 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"
#include <stdlib.h>

void	ft_printandquit(char **map)
{
	ft_print_board(map);
	exit(0);
}

void	ft_print_board(char **tab)
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

void	ft_print_list(p_list *list)
{
	int i;

	i = 1;
	while (list != NULL)
	{
	//	ft_putchar('\n');
		ft_putnbr(i);
		ft_putchar('\n');
		ft_print_board(list->piece);
		if (!(list->next == NULL))
			ft_putchar('\n');
		list = list->next;
		i++;
	}
}
