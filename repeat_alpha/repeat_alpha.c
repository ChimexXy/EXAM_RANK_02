#include <stdio.h>
#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;
	int j;
	while(av[1][i] && ac == 2)
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			j = av[1][i] - 'a';
			while(j >= 0)
			{
				write(1, &av[1][i], 1);
				j--;
			}
		}
		else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			j = av[1][i] - 'A';
			while(j >= 0)
			{
				write(1, &av[1][i], 1);
				j--;
			}
		}
		else 
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}