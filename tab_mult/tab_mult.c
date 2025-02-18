#include <unistd.h>

void ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	n = n % 10 + 48;
	write(1, &n, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res += str[i] - 48;
		i++;
	}
	return (res);
}

int ft_multiplication(int a, int b)
{
	return(a * b);
}

int main(int ac, char *av[])
{
	int i = 1;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int j = ft_atoi(av[1]);
	if(ac == 2)
	{
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(j);
			write(1, " = ", 3);
			ft_putnbr(ft_multiplication(i, j));
			write(1, "\n", 1);
			i++;
		}
	}
}