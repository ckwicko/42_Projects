/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:49:36 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/01 17:10:10 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return 1;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return 0;
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "666";
	char *str2 = "im serious stop looking";
	char *str3 = "";

        printf("%d\n", ft_str_is_numeric(str1));
        printf("%d\n", ft_str_is_numeric(str2));
        printf("%d\n", ft_str_is_numeric(str3));
	return (0);
}
