/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:24:46 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/29 17:48:32 by ansilva-         ###   ########.fr       */
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
		j = argc - 1;
		while (j > 0)
		{
			ft_print_params(argv[j]);
			ft_putchar('\n');
			j--;
		}
	}
	return (0);
}
