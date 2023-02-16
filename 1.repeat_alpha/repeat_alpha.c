/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:25:58 by thbui             #+#    #+#             */
/*   Updated: 2023/02/11 17:36:02 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int alpha = 0;

	while (argc == 2 && argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			alpha = argv[1][i] - 64;
			while (alpha != 0)
			{
				write(1, &argv[1][i], 1);
				alpha--;
			}
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			alpha = argv[1][i] - 96;
			while (alpha != 0)
			{
				write(1, &argv[1][i], 1);
				alpha--;
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}