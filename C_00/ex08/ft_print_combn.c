/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:59:14 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/20 15:05:14 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_n1(void)
{
	int		j;
	char	comb[1];

	j = 0;
	while (j <= 9)
	{
		comb[0] = j;
		ft_putchar(comb[0] + 48);
		if (comb[0] != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		j++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[2];
	int		i;

	if (n == 1)
		print_n1();
	else
	{
		i = 0;
		while (i < 9)
		{
			comb[0] = i;
			comb[1] = comb[0] + 1;
			while (comb[1] <= 9)
			{
				ft_putchar(comb[0] + 48);
				ft_putchar(comb[1] + 48);
				if (comb[0] != 8)
					write(1, ", ", 2);
				comb[1]++;
			}
			i++;
		}	
	}
}	
