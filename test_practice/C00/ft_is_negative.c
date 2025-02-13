/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:46:44 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/09 11:58:12 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= '0')
		write(1, &positive, 1);

	if (n < '0')
		write(1, &negative, 1);
}

int	main(void)
{
	int	test1;

	test1 = ('0'-'5');
	ft_is_negative(test1);
	return (0);
}
