/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:39:57 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/11 12:50:36 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;	
	while (dest[i] != '\0')
		i++;
	
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	while (i < size)
	{
		dest [i] = '\0';
		i++;
	}
	size = i;

	return size;
}

/*
int	main(void)
{
	char	dest[50] = "Hello ";
	char	src[50] = "world";
	int	size = 20;

	printf("%d\n", ft_strlcat(dest, src, size));
	return (0);	
}

*/


/*
 measure dest length
 measure src length
 combine them together
 * attempt to combine src and dest, return the size they would have equalled
*/
