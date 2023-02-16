/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:09:33 by thbui             #+#    #+#             */
/*   Updated: 2023/02/11 19:01:50 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//no malloc used
int main(int argc, char **argv)
{
	unsigned int  i = 0;

	if (argc != 3)
		return(printf("\n"));
	unsigned int a = atoi(argv[1]);
	unsigned int b = atoi(argv[2]);
	if (argc == 3)
	{
		if (a > b)
			i = a;
		else
			i = b;
		while (a != 0 && b != 0)
		{
			if ((a % i) == 0 && (b % i) == 0)
				return(printf("%d\n", i));
			else if (i == 1)
				return(printf("1\n"));
			i--;
		}
	}
}