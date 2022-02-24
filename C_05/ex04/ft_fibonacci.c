/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:42:02 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 14:58:28 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
	return (result);
}
/*int	main()
{
	int	index;

	index = -2;
	printf("%d\n", ft_fibonacci(index));
	return (0);
}*/
