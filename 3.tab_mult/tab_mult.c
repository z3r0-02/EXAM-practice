/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:08:20 by thbui             #+#    #+#             */
/*   Updated: 2023/02/08 12:38:17 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

void ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n <= 9)
		ft_putchar(n + '0');
}

int ft_getnum(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i] && str[i + 1] != '\0')
	{
		num += str[i] - '0';
		num *= 10;
		i++;
	}
	num += str[i] - '0';
	return (num);
}

int main(int argc, char **argv)
{
	unsigned long int i;
	unsigned long int result;

	i = 1;
	if(argc != 2)
		return (write(1, "\n", 1));
	while(argc == 2 && (i <= 9))
	{
		result = 0;
		ft_putchar(i + '0');
		write(1, " x ", 3);
		ft_putstr(argv[1]);
		write(1, " = ", 3);
		result = i * (ft_getnum(argv[1]));
		ft_putnbr(result);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}