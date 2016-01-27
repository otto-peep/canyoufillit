/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readnly.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:36:01 by banthony          #+#    #+#             */
/*   Updated: 2016/01/24 18:45:35 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <unistd.h>

int	ft_readnly(int fd, char *dst, size_t size)
{
	int ret;

	ret = read(fd, dst, size);
	if (ret < 0)
		ft_error();
	dst[ret] = '\0';
	return (ret);
}
