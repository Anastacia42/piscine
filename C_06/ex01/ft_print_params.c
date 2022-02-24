/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:11:56 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 17:22:51 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *params)
{
	int	i;

	i = 0;
	while (params[i])
	{
		ft_putchar(params[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			ft_print_params(argv[j]);
			ft_putchar('\n');
			j++;
		}
	}
	return (0);
}
