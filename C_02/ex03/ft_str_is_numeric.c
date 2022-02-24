/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:49:04 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/24 17:04:47 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			a = 0;
		i++;
	}
	return (a);
}
/*int	main(void)
{
	char str[] = "";
	int a;

	a = ft_str_is_numeric(str);
	printf("%d\n", a);
	return(0);
}*/
