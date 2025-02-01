/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:56:06 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/01 11:53:02 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[];
	src = "Turing test";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
