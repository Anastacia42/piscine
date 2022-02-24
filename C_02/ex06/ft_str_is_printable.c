/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:25:46 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/25 08:38:10 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			a = 0;
		i++;
	}
	return (a);
}
/*int	main()
{
	char str[] = "";
	int	a;

	a = ft_str_is_printable(str);
	printf("%d\n", a);
	return (0);
}*/
