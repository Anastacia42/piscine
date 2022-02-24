/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:18:17 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/23 17:37:37 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < n)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main()
{
	char src[15] = "Anastacia Canto";
	char dest[11];

	ft_strncpy(dest, src, 10);
	printf("%s", dest);
	return (0);
}*/
