/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:58:08 by msaadidi          #+#    #+#             */
/*   Updated: 2023/08/29 20:02:46 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}
