#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	unsigned int i = 0;
	int *str;
	unsigned int len;

	if (start > end)
		len = start - end;
	else if (start < end)
		len = end - start;
	else
	{
		str = malloc(sizeof(int));
		if (!str)
			return (NULL);
		str[i] = start;
		return (str);
	}
	str = malloc(sizeof(int) * (len + 1));
	if (!str)
		return (NULL);
	while (i <= len)
	{
		if (start > end)
		{
			str[i] = start;
			start--;
		}
		else if (start < end)
		{
			str[i] = end;
			end--;
		}
		else
			str[i] = end;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	int *arr;
	int i = 0;
	arr = ft_rrange(-2147483648, -2147483644);
	//2147483647
	while (i < 5)
	{
		printf("%d \n", arr[i]);
		i++;
	}

}