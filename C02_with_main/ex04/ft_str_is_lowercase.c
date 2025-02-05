/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:11:03 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/01 17:28:55 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
	return (1);

	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "alright";
	char *str2 = "That's it, don't say I did't warn you";
	char *str3 = "42";
	char *str4 = "";

	printf("%d\n", ft_str_is_lowercase(str1));
        printf("%d\n", ft_str_is_lowercase(str2));
        printf("%d\n", ft_str_is_lowercase(str3));
        printf("%d\n", ft_str_is_lowercase(str4));
	return (0);
}
