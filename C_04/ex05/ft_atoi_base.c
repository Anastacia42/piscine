/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:30:48 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/27 18:27:40 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	verify_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || (whitespace(base[i]) == 1))
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
			j++;
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

int	convert(int i, char *str, char *base, int len_base)
{
	int	nbr;

	nbr = 0;
	while (str[i])
	{
		j = -1;
		while (base[j])
		{
			j++;
			if (str[i] == base[j])
				nbr = (nbr * len_base) + j;
		}
		i++;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	i;
	int	nbr;
	int	minus;
	int	j;

	if (verify_base(base) == 1)
		return (0);
	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	i = 0;
	minus = 0;
	while ((whitespace(str[i]) == 1) || (str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	nbr = convert(i, str, base, len_base);
	if (minus % 2)
		nbr = -nbr;
	return (nbr);
}
/*int	main()
{
	char	str[4] = "123";
	char	base[16] = "0123456789ABCDEF";
	int	nbr;

	nbr = ft_atoi_base(str, base);
	printf("%d\n", nbr);
	return (0);
}*/
