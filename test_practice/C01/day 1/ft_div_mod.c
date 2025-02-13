/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:10:08 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/09 13:29:43 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x = 18;
	int	y = 4;
	int 	divised;
	int	remains;

	ft_div_mod(x, y, &divised, &remains);
	printf("result = %d, leftover = %d\n", divised, remains);
	return (0);
}
