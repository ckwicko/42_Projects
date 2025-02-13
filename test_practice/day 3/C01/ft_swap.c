/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:20:14 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/11 12:32:57 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 42;
	num2 = 57;

	printf("%d %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("%d %d\n", num1, num2);
	return (0);
}
