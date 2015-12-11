/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:45:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/11 13:11:11 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"
#define BUF_SIZE 4096

int		ft_check(char *buf)
{
	check_map(buf);
	return (0);
}

int		main(int argc, char **argv)
{
	char buf[BUF_SIZE + 1];
	int	fd;
	int ret;

	if (argc != 1)
	{
		ft_putstr("error");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf , BUF_SIZE);
	if (ret < 0)
	{
		ft_putstr("error");
		return (0);
	}
	buf[ret] = '\0';
//	error = ft_check;
	printf("%s\n", buf);
	return (0);
}
