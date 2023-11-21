#include <stdlib.h>
#include <stdio.h>

int ft_strlen(int nbr)
{
	int len = 0;

	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int nbr)
{
	int len = ft_strlen(nbr);

	if (nbr == -2147483648)
		len = 11;
	char *str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nbr == -2147483648)
		return (str = "-2147483648");
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	len--;
	if (nbr >= 0 && nbr <= 9)
		str[len] = nbr + '0';
	while (nbr >= 10)
	{
		str[len] = nbr % 10 + 48;
		nbr /= 10;
		len--;
		if (nbr <= 9)
			str[len] = nbr + 48;
	}
	return (str);
}

// int main ()
// {
// 	int nbr = -2147483648;
// 	printf("%s", ft_itoa(nbr));
// }