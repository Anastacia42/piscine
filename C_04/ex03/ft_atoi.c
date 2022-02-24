/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:28:14 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/26 19:48:47 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	minus;

	i = 0;
	while (whitespace(str[i]) == 1)
			i++;
	minus = 0;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	nbr = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - 48;
		i++;
	}
	if (minus % 2)
		nbr = -nbr;
	return (nbr);
}
/*int	main()
{
	char	str[] = " ---+--+1234ab567";
	int	nbr;

	nbr = ft_atoi(str);
	printf("%d\n", nbr);
}*/
