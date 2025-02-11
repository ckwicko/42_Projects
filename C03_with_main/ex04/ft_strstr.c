/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:24:02 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/08 16:20:22 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return str;

	while (str[i] != '\0')
	{
		j = 0;
		
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;

		if (to_find[j] == '\0')
			return &str[i];

		i++;
	}

	return NULL;
}

int	main(void)
{
	char	str[] = "Hello, world";

	printf("%s\n", ft_strstr(str, "lo, wor"));
	
	return (0);
}
