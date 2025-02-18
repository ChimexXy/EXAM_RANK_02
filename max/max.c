int		max(int* tab, unsigned int len)
{
	int i = 0;
	int max = 0;
	if(!tab[i])
		return (0);
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}

// #include <stdio.h>

// int main()
// {
// 	int t[4] = {7, 42, 0, -5};
// 	printf("%d", max(t, 3));
// }

