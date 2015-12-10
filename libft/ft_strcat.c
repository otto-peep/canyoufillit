/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:14:50 by pconin            #+#    #+#             */
/*   Updated: 2015/12/05 21:30:10 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	a;
	char	*dst;
	size_t	b;

	b = 0;
	dst = s1;
	a = ft_strlen(s1);
	while (s2[b] != '\0')
	{
		dst[a] = s2[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (s1);
}
