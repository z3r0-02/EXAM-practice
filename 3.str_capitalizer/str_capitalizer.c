/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:49:40 by thbui             #+#    #+#             */
/*   Updated: 2023/02/09 11:38:44 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int j = 1;
	if (!(argc >= 2))
		write(1, "\n", 1);
	while (argc > 1 && j < argc)
	{
		int i = 0;
		while (argv[j][i] && j < argc)
		{
			while (argv[j][i] && !((argv[j][i] >= 65 && argv[j][i] <= 90) || (argv[j][i] >= 97 && argv[j][i] <= 122)))
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			if (argv[j][i] && ((argv[j][i] >= 97 && argv[j][i] <= 122)))
			{
				ft_putchar(argv[j][i] - 32);
				i++;
			}
			else if ((argv[j][i] >= 65 && argv[j][i] <= 90))
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			while (argv[j][i] && (argv[j][i] >= 65 && argv[j][i] <= 90) || (argv[j][i] >= 97 && argv[j][i] <= 122))
			{
				if (argv[j][i] >= 65 && argv[j][i] <= 90)
				{
					ft_putchar(argv[j][i] + 32);
					i++;
				}
				else
				{
					ft_putchar(argv[j][i]);
					i++;
				}
			}
			// i++;
		}
		write(1, "\n", 1);
		j++;
		// i = 0;
	}
	return (0);
}