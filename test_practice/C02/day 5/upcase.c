/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upcase.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:55:24 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/13 14:16:54 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	strn[50] = "TeSt";
	
	ft_strupcase(strn);
	printf("%s\n", strn);
	return (0);
}
