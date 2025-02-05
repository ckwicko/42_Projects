/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwickman <cwickman@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:48:31 by cwickman          #+#    #+#             */
/*   Updated: 2025/02/04 14:15:15 by cwickman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
	i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "\n";
	char *str2 = "I tried to stop you";
	char *str3 = "If you truly have to see this then scroll down";
	char *str4 = "42";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
}
/*















































 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡾⠛⠛⠛⠷⣦⣄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⡾⠟⠁⠀⠀⠀⠀⠀⠀⠙⢿⣦⡄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣧⡀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣶⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣷⡄⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣤⡶⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⡀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⣶⠟⠋⠉⣁⣤⡴⠖⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢦⣀⠀⠀⠀⣿⠇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⠶⠿⠛⠋⣹⡟⢁⣴⡾⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⣼⠟⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣶⠟⠋⠀⢀⣠⠾⢻⡟⢨⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⡶⠟⠛⠉⠀⢀⣤⠞⠋⠁⣠⡟⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣷⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⣯⣉⠀⠀⣀⣤⡾⠋⠁⠀⠀⣴⡟⠀⠀⣼⡇⠀⠀⠀⠀⢀⣤⣆⠀⣞⠉⢻⡄⠈⣏⠁⢰⠿⠿⠆⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢛⣿⡿⠋⠀⠀⠀⢀⣼⠏⠈⠀⠀⣿⡇⠀⠀⠀⠰⢿⣀⣿⡧⣹⣻⣿⣤⣀⣿⣆⣘⡳⠟⢠⡿⢧⡾⠂⠀⠀⠀⠀⠀⠀⠀⢹⡇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠋⠀⠀⠀⠀⣠⡾⠃⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠉⠉⠀⢻⡏⠉⠉⠁⠀⠀⠈⠉⠳⢶⣄⢿⣢⣤⢴⡆⠀⠀⠀⠀⠀⢸⣿⠀
⠀⠀⠀⠀⠀⠀⣀⣴⠟⠁⠀⠀⠀⠀⣀⣼⡟⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⣀⣀⣴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢧⡀⢹⡟⠀⠀⠀⠀⠀⠀⣼⡏⠀
⠀⠀⠀⠀⣠⣾⠟⠁⠀⠀⠀⣠⣴⠟⣿⡟⠀⠀⠀⠀⠀⠀⣠⣿⡇⠀⠀⠀⠀⠀⠙⣯⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣷⠘⠀⠀⠀⠀⠀⠠⣼⡏⠀⠀
⠀⠀⣠⡾⠋⠁⠀⠀⠀⣠⡾⠛⠁⢰⡿⠀⠀⠀⠀⠀⠀⣴⡟⣿⠇⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠀⠀⠀⠀⠀⠀⢸⡟⠀⠀⠀
⢠⣿⣋⠀⠀⠀⣀⣴⠿⠋⠀⠀⢠⡿⠁⠀⠀⠀⠀⢠⣾⠋⠀⣿⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⣿⠃⠀⠀⠀
⠀⠉⠛⠛⠿⠛⠋⠁⠀⠀⠀⢠⡿⠁⠀⠀⠀⠀⣰⡿⠁⠀⢠⣿⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡶⠋⠁⠀⠀⠀⠀⠀⢸⡏⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡿⠁⠀⠀⠀⢀⣼⠟⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⣴⠟⠲⢤⣀⠀⠀⠀⠀⠀⠀⢀⣠⠾⠀⠀⠀⠀⠀⠀⠀⣠⡿⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡿⠁⠀⠀⠀⣠⡾⠃⠀⠀⠀⠀⠀⠿⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠙⣷⠖⠒⠲⠦⣤⣾⠁⠀⠀⠀⠀⠀⢀⣴⠿⠋⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣼⡟⠁⠀⠀⠀⣴⠟⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⢷⣦⣤⡀⠀⠀⠀⠀⠿⠆⠀⠀⠀⠈⣿⠀⠀⠀⠀⠀⣰⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣼⠟⠀⠀⠀⢀⣾⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠿⣶⣤⣀⠀⢀⣀⣠⣤⣤⣿⣦⣀⠀⣴⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣿⡃⠀⠀⢀⣰⠿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠀⠀⠀⠈⠙⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠙⠛⠿⠟⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
gottem
*/
