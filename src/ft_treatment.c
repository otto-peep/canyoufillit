/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 13:06:07 by banthony          #+#    #+#             */
/*   Updated: 2016/01/12 17:03:28 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

char	*ft_treatment(char *file, t_list **index)
{
	int		fd;
	size_t	len;
	char	buf[BUF_SIZE];

	fd = 0;
	len = 0;
	ft_init_list(index);
	fd = ft_open_rdly(file);
	len = ft_readnly(fd, buf, BUF_SIZE);
	ft_close(fd);
	return (ft_strdup(buf));
}
