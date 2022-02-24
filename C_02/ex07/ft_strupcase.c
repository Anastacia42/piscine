/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:39:57 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/25 08:46:55 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (*str);
}
/*int	main()
{
	char str[] = "anastacia123";
	
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
