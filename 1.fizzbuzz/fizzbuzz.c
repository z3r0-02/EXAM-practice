/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:10:44 by thbui             #+#    #+#             */
/*   Updated: 2023/05/18 04:44:00 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int i)
{
	if (i > 0 && i < 10)
		ft_putchar(i + '0');
	else if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putchar((i % 10) + '0');
	}
}

int main()
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			write(1, "fizz\n", 5);
		else if ((i % 5) == 0 && (i % 3) != 0)
			write(1, "buzz\n", 5);
		else if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz\n", 9);
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
	}
}