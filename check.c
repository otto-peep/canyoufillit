/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:54:46 by pconin            #+#    #+#             */
/*   Updated: 2015/12/10 19:17:38 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		check_char(char *buf);
{
	while (*buf)
	{
		if (buf != '\n' && buf != '#' && buf != '.')
			return (1);
		*buf++;
	}
	return (0);

int		check_map(char *buf);
{
	int ret;

	ret = 1;
	ret = ret - check_char(buf);
	ret = ret - check_
