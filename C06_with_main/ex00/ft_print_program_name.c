/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:41:25 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/12 15:04:38 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		i++;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
}
