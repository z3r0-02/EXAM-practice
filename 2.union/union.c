/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:09:14 by thbui             #+#    #+#             */
/*   Updated: 2023/02/08 13:56:13 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strchr(char *set, int len, char c)
{
	int i = 0;

	while (i < len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int num = 0;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_strchr(argv[1], i, argv[1][i]))
			{
				i++;
				num++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
				num++;
			}
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (ft_strchr(argv[1], num, argv[2][i]) == 1)
				i++;
			else	
			{
				write(1, &argv[2][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}