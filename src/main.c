/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 19:38:44 by banthony          #+#    #+#             */
/*   Updated: 2016/01/04 18:50:08 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lib_fillit.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
# define BUF_SIZE 4096

int main (int argc, char **argv)
{
	int fd;
	size_t len;
	char buf[BUF_SIZE];
	p_list *index;
	p_list *new;
	p_list *sort;

	fd = 0;
	len = 0;
	index = NULL;
	new = NULL;
	sort = NULL;
	ft_init_list(&index);
	if (argc == 2 && argv)
	{
		fd = open(argv[1], O_RDONLY);
		len = read(fd, buf, BUF_SIZE);
//		fd = ft_open_rdly(argv[1]);
//		len = ft_readnly(fd, buf, BUF_SIZE);
//		ft_close(fd);
		buf[len] = '\0';
//		ft_putstr(buf);
		if (ft_check(buf) != 1)
		{
			ft_putstr("tets");
			ft_error();
		}
		ft_get_piece(&new, buf, len);
		ft_print_list(new);
		sort = ft_identify(&new, &index, sort);
//		ft_print_list(new);
		find_sqtall(sort);
	}
	else
		ft_error();
	return (0);
}










