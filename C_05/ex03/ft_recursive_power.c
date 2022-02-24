/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:27:10 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 14:39:38 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	i = power;
	result = result * ft_recursive_power(nb, i - 1);
	return (result);
}
/*int	main()
{
	int	nb;
	int	power;

	nb = 2;
	power = 1;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}*/
