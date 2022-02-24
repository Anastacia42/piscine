/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:45:38 by ansilva-          #+#    #+#             */
/*   Updated: 2022/02/03 09:42:07 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	g_size_int;

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	find_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	i;
	int	nbr;

	len_base = ft_strlen(base);
	i = 0;
	nbr = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (find_in_base(base, str[i]) != -1)
			nbr = (nbr * len_base) + find_in_base(base, str[i]);
		i++;
	}
	if (str[0] == '-')
		nbr = -nbr;
	return (nbr);
}

int	calc_size(int nbr, int len_base)
{
	int	j;

	g_size_int = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		g_size_int++;
	}
	j = nbr;
	while (j)
	{
		j = j / len_base;
		g_size_int++;
	}
	return (g_size_int);
}

char	*ft_put_nbr_base(int nbr, char *base)
{
	int		len_base;
	char	*nbr_final;
	int		i;
	int		j;

	len_base = ft_strlen(base);
	g_size_int = calc_size(nbr, len_base);
	nbr_final = malloc(sizeof(*nbr_final) * g_size_int + 1);
	if (nbr_final == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		nbr_final[0] = '-';
		nbr = -nbr;
		i = 1;
	}
	j = g_size_int - 1;
	while (j >= i)
	{
		nbr_final[j--] = base[nbr % len_base];
		nbr = nbr / len_base;
	}
	nbr_final[g_size_int] = '\0';
	return (nbr_final);
}
