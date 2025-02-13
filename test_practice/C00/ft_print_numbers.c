/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:43:41 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/09 11:46:14 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num = '0';

	while (num <= '9')
	{
		write(1, &num, 1);
			num++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return 0;
}
