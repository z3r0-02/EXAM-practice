/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:12:50 by thbui             #+#    #+#             */
/*   Updated: 2023/02/07 22:43:00 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][i + 1] != '\0' || argv[3][i + 1] != '\0')
			return (write(1, "\n", 1));
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		(write(1, argv[1], i));
		(write(1, "\n", 1));
		return (0);
	}
	else
		return (write(1, "\n", 1));
}