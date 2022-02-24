/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:06:39 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/24 17:14:00 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			a = 0;
		i++;
	}
	return (a);
}
/*int	main()
{
	char str[] = "";
	int	a;

	a = ft_str_is_lowercase(str);
	printf("%d\n", a);
	return (0);
}*/
