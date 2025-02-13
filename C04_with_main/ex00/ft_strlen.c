/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:30:42 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/13 13:40:15 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	num;
	int	i;

	i = 0;
	num = '\0';
	while (str[i] != '\0')
	{
		i++;
		num++;
	}
	return (num);
}

int	main(void)
{
	char	strin[50] = "Hello";
	printf("%d\n", ft_strlen(strin));
	return (0);
}
