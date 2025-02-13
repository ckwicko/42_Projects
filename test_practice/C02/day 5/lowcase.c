/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowcase.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:18:18 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/13 14:22:58 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	strn[50] = "tEsT";

	printf("%s\n", ft_strlowcase(strn));
	return (0);
}
