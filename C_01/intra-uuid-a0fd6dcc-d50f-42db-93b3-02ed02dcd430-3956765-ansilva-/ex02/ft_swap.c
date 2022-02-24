/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:22:47 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/22 11:29:37 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*void	ft_swap(int	*a, int	*b);

int	main()
{
	int	value_a;
	int	value_b;
	int	*a;
	int	*b;
	
	value_a = 10;
	value_b = 20;
	printf("%d\n", value_a);
	printf("%d\n", value_b);
	a = &value_a;
	b = &value_b;
	ft_swap(a, b);
	printf("%d\n", value_a);
	printf("%d\n", value_b);
	return(0);
}*/
