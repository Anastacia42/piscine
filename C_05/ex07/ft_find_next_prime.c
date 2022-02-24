/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:02:03 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/30 13:22:01 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			if (i == nb)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
int	main()
{
	int	nb;

	nb = 143;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
