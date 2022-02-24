/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:44:23 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 15:59:51 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	mod;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb)
	{
		mod = nb % i;
		if ((mod == 0) && (i == nb))
			return (1);
		else if ((mod == 0) && (i < nb))
			return (0);
		i++;
	}
	return (0);
}
/*int	main()
{
	int	nb;

	nb = 18;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}*/
