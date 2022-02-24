/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:41:43 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/26 17:40:11 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while ((src[a] != '\0') && (a < (size - len_dest - 1)))
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (len_src + len_dest);
}
/*int	main()
{
	char	src[11] = "45678910";
	char	dest[9] = "123";
	unsigned int	size;

	size = 2;
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}*/
