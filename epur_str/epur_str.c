#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}
int main(int ac, char *av[])
{
	int i = 0;
	int j = ft_strlen(av[1]);
	while (av[1][i] == ' ')
		i++;
	while(av[1][j] == ' ')
		j--;
	int k = j - i;
	while(av[1][i])
	{
		if(i < k)
			write(1, &av[1][i], 1);
		while(av[1][i] == 32 && av[1][i + 1] == 32)
			i++;	
		i++;
	}
}