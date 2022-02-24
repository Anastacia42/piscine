/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:02:10 by ansilva-          #+#    #+#             */
/*   Updated: 2022/02/03 09:42:04 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		find_in_base(char *base, char c);
int		ft_atoi_base(char *str, char *base);
char	*ft_put_nbr_base(int nbr, char *base);
int		calc_size(int *nbr, int len_base);

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
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	get_nbr(char *nbr, char	*nbr_char)
{
	int	i;
	int	j;
	int	minus;

	minus = 0;
	i = 0;
	while (nbr[i])
	{
		if (nbr[i++] == '-')
			minus++;
	}
	j = 0;
	if ((minus % 2) == 1)
		nbr_char[j++] = '-';
	i = 0;
	while (nbr[i])
	{
		if ((whitespace(nbr[i]) == 0) && (nbr[i] != '+') && (nbr[i] != '-'))
			nbr_char[j++] = nbr[i];
		i++;
	}
	return (*nbr_char);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nbr_char;
	int		nbr_int;
	char	*nbr_final;

	if (verify_base(base_from) == 1 || verify_base(base_to) == 1 || !nbr)
		return (NULL);
	nbr_char = malloc(sizeof(*nbr_char) * 11);
	if (nbr_char == NULL)
		return (NULL);
	get_nbr(nbr, nbr_char);
	nbr_int = ft_atoi_base(nbr_char, base_from);
	free(nbr_char);
	nbr_final = ft_put_nbr_base(nbr_int, base_to);
	return (nbr_final);
}
/*
int	main()
{
	char	base_from[] = "0123456789";
	char	base_to[] = "0123456789ABCDEF";
	char	nbr[] = "   +++---177";
	char	*nbr_final;
	//int	i;

	nbr_final = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", nbr_final);
	return (0);
}*/
