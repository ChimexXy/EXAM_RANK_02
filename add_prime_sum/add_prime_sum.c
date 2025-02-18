#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb > 9)
	{
		ft_putchar((nb / 10) + 48);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
int ft_atoi(char *s)
{
	int i = 0;
	int res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10;
		res += s[i] - 48;
		i++;
	}
	return res;
}


int main(int ac, char *av[])
{
	if(ac != 2)	
		return(write(1, "0\n", 2), 0);
	int j = 0;
	int i = ft_atoi(av[1]);

	if(ac == 2)
	{
		while(i > 2)
		{
			if(i % 2 == 1)
				j += i;
			i--;
		}
		ft_putnbr(j + 2);
	}
	write(1, "\n", 1);
}