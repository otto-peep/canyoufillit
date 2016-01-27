/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:54:46 by pconin            #+#    #+#             */
/*   Updated: 2016/01/27 15:12:06 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int		check_block(char *buf, int index)
{
	int count;
	int hash;

	hash = 0;
	count = 21;
	while (count > 0)
	{
		if (buf[index] == '#')
			hash++;
		index++;
		count--;
	}
	if (hash != 4)
		return (0);
	else
		return (1);
}

int		check_line(char *buf, int index)
{
	int a;

	a = 0;
	while (buf[index] != '\n' && buf[index])
	{
		index++;
		a++;
	}
	if (a != 4)
		return (0);
	return (1);
}

int		check_char(char *buf)
{
	int index;

	index = 0;
	while (buf[index])
	{
		if (buf[index] != '\n' && buf[index] != '#' && buf[index] != '.')
			return (0);
		index++;
	}
	return (1);
}

int		check_map(char *buf)
{
	int	index;
	int	a;
	int count;

	count = 0;
	index = 0;
	while (buf[index])
	{
		a = 0;
		if (check_block(buf, index) == 0)
			return (0);
		while (a < 4)
		{
			if (!(check_line(buf, index)))
				return (0);
			a++;
			index = index + 5;
		}
		if ((buf[index] == '\n' && buf[index + 1] == '\0') || count > 26)
			return (0);
		else
			index = index + 1;
		count++;
	}
	return (1);
}

int		ft_check(char *buf)
{
	if (check_char(buf) != 1)
		return (0);
	if (check_map(buf) != 1)
		return (0);
	else
		return (1);
}
