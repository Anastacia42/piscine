/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:29:07 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/26 09:51:10 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while ((src[a] != '\0') && (a < nb))
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
/*int	 main()
{
	char	src[15] = "Anastacia Canto";
	char	dest[20] = "Anastacia";
	unsigned int	nb;

	nb = 15;
	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}*/
