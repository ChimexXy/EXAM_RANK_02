#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == '_')
			{
				if(av[1][i + 1] >= 'a' || av[1][i + 1] <= 'z')
				{
					av[1][i + 1] -= 32;
					write(1, &av[1][i + 1], 1);
				}
				i++;
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}