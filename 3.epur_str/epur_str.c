#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
		return (write(1, "\n", 1));
	while (argv[1][i])
	{
		while (argv[1][i] == 32 || argv[1][i] <= 9 && argv[1][i] <= 13)
			i++;
		while (argv[1][i] >= 33 && argv[1][i] <= 126)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] <= 9 && argv[1][i] <= 13))
		{
			i++;
			if (argv[1][i] && (argv[1][i] >= 33 && argv[1][i] <= 126))
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}