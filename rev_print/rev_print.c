/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:44:11 by thbui             #+#    #+#             */
/*   Updated: 2023/02/08 13:02:35 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
		return (write(1, "\n", 1));
	i = ft_strlen(argv[1]) - 1;
	while (argc == 2 && i >= 0)
	{
		ft_putchar(argv[1][i]);
		i--;
	}
	write(1, "\n", 1);
	// write(1, "\0", 1);
	return (0);
}