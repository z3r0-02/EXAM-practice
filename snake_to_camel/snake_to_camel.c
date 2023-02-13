/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:37:12 by thbui             #+#    #+#             */
/*   Updated: 2023/02/11 18:09:05 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		if (str[i] == '_')
			i++;
		count++;
		i++;
	}
	return (count);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char *str;
	int i = 0;
	int res = 0;

	if (!argv[1])
		return (write(1, "\n", 1));
	int len = ft_strlen(argv[1]);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				if (argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z')
					argv[1][i + 1] -= 32;
				i++;
			}
			else
			{
				str[res] = argv[1][i];
				res++;
				i++;
			}
		}
	}
	str[res] = '\0';
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}