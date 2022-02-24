/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:41:45 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/26 17:04:26 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && (i + 1 < n))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char	s1[] = "Banana";
	char	s2[] = "B";
	unsigned int	n;
	int	a;
	
	n = 5;
	a = ft_strncmp(s1, s2, n);
	printf("%d\n", a);
	printf("%d\n", strncmp(s1, s2, n));
	return (0);
}*/
