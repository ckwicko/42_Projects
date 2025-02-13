/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:28:43 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/11 15:22:06 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	add1(int a)
{
	a += 1;
}

void	add1ptr(int *a)
{
	*a += 1;
}

/*
void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}
*/

int	main(void)
{
	int	number;
	int	*ptr;
	/*
	int	*p1 = &number;
	int	**p2 = &p1;
	int	***p3 = &p2;
*/
	number = 5;
	add1(number);
	printf("number: %d\n\n", number);

	ptr = &number;
	add1(*ptr);
	printf("ptr add1: %d\n\n", *ptr);

	add1ptr(ptr);
	printf("ptr add ptr: %d\n\n", *ptr);
	

/*

	ft_ultimate_ft(&p2);
	printf("%d\n", number);

*/
	return (0);
}
