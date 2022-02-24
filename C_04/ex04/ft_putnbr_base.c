/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:06:50 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/27 18:12:43 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr, char *base, int size)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(base[2 / size]);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= size)
		ft_putnbr(nbr / size, base, size);
	ft_putchar(base[nbr % size]);
}

int	verify_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while ((base[i] != base[j]) && (base[j] != '\0'))
		{
			j++;
		}
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	if (!(size <= 1 || verify_base(base) == 1))
		ft_putnbr(nbr, base, size);
}
/*int	main()
{
	int	nbr;
	char	base[] = "01";

	nbr = 125;
	ft_putnbr_base(nbr, base);
	return (0);
}*/
