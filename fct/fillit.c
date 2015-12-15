/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:45:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/15 17:36:03 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	char buf[BUF_SIZE + 1];
	int	fd;
	int ret;

	if (argc != 2)
	{
		ft_putstr("error");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf , BUF_SIZE);
	if (ret < 0)
	{
		ft_putstr("error2");
		return (0);
	}
	buf[ret] = '\0';
	if (ft_check(buf) != 1)
	{
		ft_putstr("error3");
		return (0);
	}
//	printf("%s\n", buf);
	return (0);
}
