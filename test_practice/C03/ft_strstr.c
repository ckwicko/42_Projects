/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:06:48 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/13 15:18:58 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (to_find[i])
		{
			while (str[i] == to_find[i])


}

int	main(void)
{
	char	strn[50] = "Hello World";
	char	find[50] = "or";

	ft_strstr(strn, find);
	printf("%s\n", find);
	return (0);
}
