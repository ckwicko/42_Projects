/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:34:58 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/04 12:47:29 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
	return (1);

	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "FINE";
	char *str2 = "this was your last chance";
	char *str3 = "42";
	char *str4 = "";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	return (0);
}

