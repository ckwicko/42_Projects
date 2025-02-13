/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:38:53 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/09 11:42:16 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha = 'z';

	while (alpha >= 'a')
	{
		write(1, &alpha, 1);
		alpha--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
