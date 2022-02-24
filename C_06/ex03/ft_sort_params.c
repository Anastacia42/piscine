/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:47:24 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/30 09:52:21 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *params)
{
	while (*params)
		write(1, params++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		k;
	char	*temp;

	k = 1;
	while (k < argc - 1)
	{
		if (ft_strcmp(argv[k], argv[k + 1]) > 0)
		{
			temp = argv[k];
			argv[k] = argv[k + 1];
			argv[k + 1] = temp;
			k = 0;
		}
		k++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		j = 1;
		while (j < argc)
		{
			ft_print_params(argv[j]);
			j++;
		}
	}
	return (0);
}
