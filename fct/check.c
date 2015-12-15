/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:54:46 by pconin            #+#    #+#             */
/*   Updated: 2015/12/15 17:42:08 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfillit.h"
#include "libft.h"

int		check_line(char *buf, int index)
{
	int a;

	a = 4;
	while (a > 0 && buf[index] != '\n')
	{
		index++;
		a--;
	}
	if (a != 0)
		return (0);
	else
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

	while (buf)
	{
		a = 4;
		while (a > 0 && check_line(buf, index))
		{
			a--;
			index = index + 4;
		}
		if (buf[index++] != '\n' || check_line(buf, index) != 1)
			return (0);
		else
			index++;
	}
	return (1);
}

int		ft_check(char *buf)
{
	if (check_char(buf) != 1)
	{
		ft_putstr("yo");
		return (0);
	}
	if (check_map(buf) != 1)
	{
		ft_putstr("hi");
		return (0);
	}
	else
		return (1);
}
