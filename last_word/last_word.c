#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int ft_check(char *str)
{
	int i = ft_strlen(str) - 1; 
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			return i;
		i--;
	}
	return 0;
}
int main(int ac, char *av[])
{
	int i = ft_check(av[1]) + 1;

	while(av[1][i])
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}