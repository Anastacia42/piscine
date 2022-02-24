/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:49:18 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/23 18:51:38 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{	
			a = 0;
			break ;
		}
		i++;
	}
	return (a);
}
/*int	main()
{
	char	str[] = "";
	int	a;

	a = ft_str_is_alpha(str);
	printf("%d\n", a);
	printf("%s", str);
	return (0);
}*/
