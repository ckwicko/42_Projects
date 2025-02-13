/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:13:26 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/11 11:21:58 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = '*';
}

int	main(void)
{
	int	number;
	int	*nbr1 = &number;
	int	**nbr2 = &nbr1;
	int	***nbr3 = &nbr2;


	ft_ultimate_ft(&nbr2);
	printf("%d\n", number);
	return (0);
}
