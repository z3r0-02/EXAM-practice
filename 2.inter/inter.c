#include <unistd.h>

int ft_strchr(char c, char *str)
{
	int i = 0;

	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_strch(int len, char c, char *str)
{
	int i = 0;

	while (i < len)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int len = 0;

	if (argc != 3)
		return(write(1, "\n", 1));
	while (argv[1][len])
	{
		if (ft_strchr(argv[1][len], argv[2]) == 1)
			if (ft_strch(len, argv[1][len], argv[1]) == 0)
				write(1, &argv[1][len], 1);
		len++;
	}
	write(1, "\n", 1);
	return (0);
}