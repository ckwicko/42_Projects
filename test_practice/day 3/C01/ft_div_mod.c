/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:34:52 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/11 12:44:13 by cwickman         ###   ########.fr       */
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
	int	num1;
	int	num2;
	int	divd;
	int	modd;

	num1 = 18;
	num2 = 4;
	ft_div_mod(num1, num2, &divd, &modd);
	printf("%d\n%d\n", divd, modd);
	return(0);
}
