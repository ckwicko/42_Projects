/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncopy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:26:35 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/12 12:33:16 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char sr[50] = "hello";
	char des[50];
	unsigned int size = 50;

	printf("%s\n", ft_strncpy(des, sr, size));
	return (0);
}
