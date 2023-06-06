#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
	write(1, "\n", 1);
	return (0);
	}

	signed int num1 = atoi(argv[1]);
	signed int num2 = atoi(argv[3]);
	// int result;
	printf("\n%d", num1);
	printf("\n%d", num2);
	// if (argv[2][0] == '+')
	// 	result = num1 + num2;
	// else if (

	// printf("%d\n", result);
	printf("%ld", write(1, "\n", 1));
	
}