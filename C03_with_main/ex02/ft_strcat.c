/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:08:47 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/08 15:23:54 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;

}

int	main(void)
{
	char a[50] = "Hello";
	char b[] = "World";
	
	printf("%s\n", ft_strcat(a, b));
	return (0);
}
/*
 *
 *
 *
 * cant just combine the two strings as they are arrays, each char in the array must be converterted
 * individually
 */
