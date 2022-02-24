/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:11:12 by ansilva-          #+#    #+#             */
/*   Updated: 2022/02/02 17:36:06 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main()
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	min = -5;
	max = 5;
	size = max - min;
	tab = ft_range(min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
