/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:19:14 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/01 15:34:50 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[100] = "You can silence me but you can't silence the truth!";
	char dest[100];
	unsigned int n = 48;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
