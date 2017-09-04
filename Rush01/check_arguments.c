/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:59:51 by cman              #+#    #+#             */
/*   Updated: 2017/08/20 18:38:38 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_arguments(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= 9)
	{
		j = 1;
		while (argv[i][j] != '\0')
		{
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}
