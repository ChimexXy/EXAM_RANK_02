#include <stdlib.h>

int nbr_len(int n)
{
	int i = 0;
	if(n <= 0)
	{
		i++;
		n *= -1;
	}
	while(n)
	{
		n /= 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int nbr)
{
	char *str = malloc(nbr_len(nbr) + 1);
	int len = nbr_len(nbr);
	unsigned int n = nbr;
	str[len] = '\0';

	if(n < 0)
		n *= -1;
	while(len)
	{
		len--;
		str[len] = 48 + n % 10;
		n /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}
