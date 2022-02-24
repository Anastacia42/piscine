/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:59:10 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/25 11:44:41 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i - 1] >= 32 && str[i - 1] <= 47)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*int	main()
{
	char	str[] = "oi, tudo bem? 42palavras quaRenta-e-duas; cinquenta+e+um";
	
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
