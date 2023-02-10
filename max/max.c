/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:32:57 by thbui             #+#    #+#             */
/*   Updated: 2023/02/09 23:16:24 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max( int *tab, unsigned int len)
{
	int num = 0;
	int i = 0;

	while (tab[i] && i < len)
	{
		if (tab[i] > num)
			num = tab[i];
		i++;
	}
	return (num);
}

#include <stdio.h>
int main()
{
	int tab[5] = { 5, 7, 9, 1, 2};
	printf("%d", max (tab, 3));
}