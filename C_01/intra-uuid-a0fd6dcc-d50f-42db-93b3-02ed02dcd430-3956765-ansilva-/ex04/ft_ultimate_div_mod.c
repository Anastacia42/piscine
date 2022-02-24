/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:54:52 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/22 11:31:17 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	value_a;
	int	value_b;

	if (*b != 0)
	{
		value_a = *a;
		value_b = *b;
		*a = value_a / value_b;
		*b = value_a % value_b;
	}
}
/*int	main()
{
	int	value_a;
	int	value_b;
	int	*a;
	int	*b;

	value_a = 42;
	value_b = 10;
	a = &value_a;
	b = &value_b;
	printf("%d\n", value_a);
	printf("%d\n", value_b);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", value_a);
	printf("%d\n", value_b);
	return (0);
}*/
