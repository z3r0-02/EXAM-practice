/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:43:03 by thbui             #+#    #+#             */
/*   Updated: 2023/06/06 16:29:18 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_test(int nbr) //doesn't work with smallest int!
{
	char *str;
	int temp_n = nbr;
	int negative = 0;
	unsigned len = 1;

	if (nbr < 0)
	{
		negative = 1;
		nbr *= -1;
		len++;
		temp_n *= -1;
	}
	while (temp_n > 9)
	{
		temp_n /= 10;
		len++;
	}
	printf("len: %d\n", len);
	str = (char *)malloc(sizeof(char) * (len + 1)); // +1 na '\0'
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (negative == 1)	//add - at the beggining if number was negative
		str[0] = '-';
	while (nbr > 9 && len > 0)
	{
		str[len] = nbr % 10 + 48;
		nbr /= 10;
		len--;
	}
	if (nbr <= 9)		//last number will fall in this
		str[len] = nbr % 10 + 48;
	printf("str: %s", str);
	return (str);
}

int main(void)
{
	ft_itoa_test(-2147483648);
}