/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 14:09:43 by banthony          #+#    #+#             */
/*   Updated: 2016/01/11 15:45:06 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_fillit.h"

char	**ft_mapcpy(char **tab)
{
	int		i;
	char	**tabcp;

	i = 0;
	tabcp = NULL;
	if (!(tabcp = (char **)malloc(sizeof(char *) * NB_L + 1)))
		return (NULL);
	while (i < NB_L)
	{
		if (!(tabcp[i] = ft_strdup(tab[i])))
			return (NULL);
		i++;
	}
	tabcp[NB_L] = NULL;
	return (tabcp);
}
