/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:43:53 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/09 13:08:30 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	printf("%d %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("%d %d\n", num1, num2);
	return (0);
}
