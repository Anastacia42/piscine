/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:15 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 12:40:16 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*int	main()
{
	int	nb;

	nb = 3;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}*/
