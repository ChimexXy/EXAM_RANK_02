#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *tab = malloc((end - start) * 4);
	while(start <= end)
	{
		tab[i] = end;
		i++;
		end--;
	}
	return(tab);
}
