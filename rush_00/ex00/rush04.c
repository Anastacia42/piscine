/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:50:15 by camoreir          #+#    #+#             */
/*   Updated: 2022/01/15 19:05:50 by camoreir         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('C');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}
