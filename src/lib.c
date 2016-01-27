/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 12:59:27 by pconin            #+#    #+#             */
/*   Updated: 2016/01/11 13:06:58 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "lib_fillit.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memalloc(size_t size)
{
	unsigned char *fresh;

	if (size == 0)
		return (NULL);
	fresh = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return ((void *)fresh);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	dst = NULL;
	dst = (char *)ft_memalloc(len + 1);
	if (dst == NULL)
		return (NULL);
	while (index != len)
	{
		dst[index] = s[start + index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
