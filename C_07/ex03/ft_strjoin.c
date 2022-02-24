/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:30:24 by ansilva-          #+#    #+#             */
/*   Updated: 2022/02/03 11:30:37 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	g_i;

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (!dest || ! src)
		return (dest);
	while (dest[i])
		i++;
	while (src[a])
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}

char	*get_str(int size, char **strs, char *sep)
{
	char	*str;
	int		j;
	int		len_sep;
	int		len_strs;

	j = 0;
	len_strs = 0;
	if (size == 0)
	{
		str = malloc(sizeof(*str));
		*str = 0;
		return (str);
	}
	while (j < size)
	{
		len_strs += ft_strlen(strs[j]);
		j++;
	}
	len_sep = ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(*str) * (len_strs + len_sep + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		j;
	int		k;

	str = get_str(size, strs, sep);
	g_i = 0;
	k = 0;
	while (g_i < size)
	{
		j = 0;
		while (strs[g_i][j])
		{
			str[k++] = strs[g_i][j];
			j++;
		}
		j = 0;
		while (sep[j] && g_i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
		g_i++;
	}
	str[k] = '\0';
	return (str);
}
/*
int	main()
{
	char	*strs[4];
	char	sep[] = ":::";
	int		size;

	strs[0] = "abcd";
	strs[1] = "ef";
	strs[2] = "ghi";
	size = 3;
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}*/
