/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:48:16 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 13:05:30 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = power;
	result = nb;
	while (i >= 2)
	{
		result = result * nb;
		i--;
	}
	return (result);
}
/*int	main()
{
	int	nb;
	int	power;

	nb = 2;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
