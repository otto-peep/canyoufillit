/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 12:20:55 by banthony          #+#    #+#             */
/*   Updated: 2016/01/11 15:39:18 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

/*
** LG = Tetriminos en L gauche
** T = Tetriminos en T
** L = Tetriminos en Ligne
** ZD = Tetriminos en Z droite, etc ...
*/

void	ft_init_list(t_list **list)
{
	*list = ft_create_elmt(LG4, -30);
	ft_list_push_front(list, LG3);
	ft_list_push_front(list, LG2);
	ft_list_push_front(list, LG1);
	ft_list_push_front(list, ZG2);
	ft_list_push_front(list, ZG1);
	ft_list_push_front(list, SQUARE);
	ft_list_push_front(list, L2);
	ft_list_push_front(list, L1);
	ft_list_push_front(list, LD4);
	ft_list_push_front(list, LD3);
	ft_list_push_front(list, LD2);
	ft_list_push_front(list, LD1);
	ft_list_push_front(list, T4);
	ft_list_push_front(list, T3);
	ft_list_push_front(list, T2);
	ft_list_push_front(list, T1);
	ft_list_push_front(list, ZD2);
	ft_list_push_front(list, ZD1);
}
