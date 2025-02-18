#include <unistd.h>
#include <strings.h>

int main(int ac, char *av[])
{
	if(ac != 2)
		return (write(1, "\n", 1), 0);
	int i = strlen(av[1]) - 1;
	if(ac == 2)
	{
		while(i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
			write(1, "\n", 1);
}