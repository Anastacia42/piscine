/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:59:07 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/31 19:04:43 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	print_array(int size, int min, int *tab)
{
	int	j;

	j = 0;
	while (j < size)
	{
		tab[j] = min;
		j++;
		min++;
	}
	return (j);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		size = max - min;
		tab = malloc(sizeof(*tab) * size + 1);
		if (tab == NULL)
			return (-1);
		else
		{
			i = print_array(size, min, tab);
			*range = tab;
			return (i);
		}
	}
}
