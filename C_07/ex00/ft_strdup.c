/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:55:16 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/30 14:10:09 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(*dup) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}
/*int	main()
{
	char	src[] = "Anastacia";
	char	*cpy;
   
	cpy = ft_strdup(src);
	printf("%s\n", src);
	printf("%s\n", cpy);
	return (0);
}*/
