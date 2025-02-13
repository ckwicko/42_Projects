/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:27:21 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/09 11:38:12 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return 0;
}
