/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:00:10 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/30 09:13:01 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
/*int	main()
{
	int	nb;

	nb = 144;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/
