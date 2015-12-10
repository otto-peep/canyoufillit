/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:28:37 by pconin            #+#    #+#             */
/*   Updated: 2015/12/04 19:05:13 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*b;

	b = (char *)s;
	a = ft_strlen(s);
	while (b[a] != c && a != 0)
		a--;
	if (b[a] == c)
		return (&b[a]);
	else
		return (NULL);
}
