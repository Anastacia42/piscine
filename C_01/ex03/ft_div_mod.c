/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:38:03 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/22 11:30:35 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main()
{
	int	a;
	int	b;
	int	result_div;
	int	result_mod;
	int	*div;
	int	*mod;

	a = 42;
	b = 10;
	div = &result_div;
	mod = &result_mod;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", result_div);
	printf("%d\n", result_mod);
	return (0);
}*/
