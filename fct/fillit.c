/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:45:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/24 20:33:58 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"
#define BUF_SIZE 4096

int		amain(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;
	p_list	*tetri;	
	if (argc != 2)
		error(1);
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf , BUF_SIZE);
	if (ret < 0)
		error(2);
	buf[ret] = '\0';
	if (ft_check(buf) != 1)
		error(3);
	ft_get_piece(&tetri, buf, ret);
	ft_print_list(tetri);
//	resolution(tetri);
//	printf("%s", buf);
	return (0);
}

int		main(void)
{
	char **map;
	int		sqtall;

	sqtall = 4;
	map = NULL;
	update_map(sqtall, map);
	return (0);
}
