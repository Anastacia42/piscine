/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacaeta <joacaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:13:15 by camoreir          #+#    #+#             */
/*   Updated: 2022/01/24 12:41:08 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && r == 1) || (p == x && r == y && p != 1 && r != 1))
				ft_putchar('o');
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('o');
			else if ((p == 1) || (p == x))
				ft_putchar('|');
			else if ((r == 1) || (r == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}
