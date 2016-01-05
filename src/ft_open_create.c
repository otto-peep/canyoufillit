/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 11:39:57 by banthony          #+#    #+#             */
/*   Updated: 2015/12/22 14:27:02 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "lib_fillit.h"
#include "libft.h"

static void	ft_init(int fd, char *content)
{
	ft_putstr_fd(content, fd);
}
void	ft_open_create(char *file_name, char *content)
{
	int fd;

	fd = open(file_name, O_WRONLY |  O_CREAT | S_IRUSR | S_IWUSR);
	if (fd < 0)
		ft_error();
	ft_init(fd, content);
}
