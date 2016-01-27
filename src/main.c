/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 19:38:44 by banthony          #+#    #+#             */
/*   Updated: 2016/01/13 13:07:41 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int		main(int argc, char **argv)
{
	char	*buf;
	t_list	*index;
	t_list	*new;
	t_list	*sort;
	char	**map;

	map = NULL;
	buf = NULL;
	index = NULL;
	new = NULL;
	sort = NULL;
	if (argc == 2 && argv)
	{
		buf = ft_treatment(argv[1], &index);
		if (ft_check(buf) != 1)
			ft_error();
		ft_get_piece(&new, buf, ft_strlen(buf));
		sort = ft_identify(&new, &index, sort);
		map = init_map(ft_min_sqtall(sort), map);
		ft_resolve2(ft_min_sqtall(sort), &sort, map, 666);
		ft_printandquit(map);
	}
	else
		ft_error();
	return (0);
}
