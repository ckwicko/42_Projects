/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:40:11 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/01 17:09:43 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
	return (1);

	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
	char *str1 = "Stop looking at my code";
	char *str2 = "666";
	char *str3 = "";

	printf("%d\n", ft_str_is_alpha(str1));
        printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	return (0);
}
	



