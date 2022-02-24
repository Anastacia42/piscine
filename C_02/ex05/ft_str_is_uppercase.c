/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:15:34 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/24 17:19:50 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			a = 0;
		i++;
	}
	return (a);
}
/*int	main()
{
	char str[] = "";
	int	a;

	a = ft_str_is_uppercase(str);
	printf("%d\n", a);
	return (0);
}*/
