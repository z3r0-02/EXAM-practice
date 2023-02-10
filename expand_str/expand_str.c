/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:16:40 by thbui             #+#    #+#             */
/*   Updated: 2023/02/09 10:30:45 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	while (str[i - 1] == ' ')
		i--;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i++;
		int len = ft_strlen(argv[1]);
		while (i < len)
		{
			if(!(argv[1][i] >= 9 && argv[1][i] <= 13) && argv[1][i] != 32)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (i == len)
				break;
			while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			{
				if (!(argv[1][i + 1] >= 9 && argv[1][i + 1] <= 13) && argv[1][i + 1] != 32)
				{
					write (1, "   ", 3);
					// i++;
				}
				i++;
			}
			// i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}