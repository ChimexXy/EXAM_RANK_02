#include <stdio.h>
#include <stdlib.h>

int count_word(char *str, char c)
{
	int i = 0;
	int j = 0;
	while(str[i] == c)
		i++;
	while(str[i])
	{
		if(str[i] != c && str[i])
			j++;
		while(str[i] != c && str[i])
			i++;
		while(str[i] == c && str[i])
			i++;
	}
	return j;
}

char *ft_substr(char *str, int start, int end)
{
	int i = start;
	int ind = 0;
	int j = end - start;
	char *ptr = malloc(j + 1);

	while(i < end)
	{
		ptr[ind] = str[i];
		ind++;
		i++;
	}
	ptr[ind] = '\0';
	return ptr;
}
char **ft_split(char *str, char c)
{
	int i = 0;
	int cnt = 0;
	int start;
	int len = count_word(str, c);
	char **tab = malloc((len + 1) * 8);

	while(cnt < len)
	{
		while(str[i] == c)
			i++;
		start = i;
		while (str[i] != c)
			i++;
		tab[cnt] = ft_substr(str, start, i);
		cnt++;
	}
	tab[cnt] = "\0";
	return(tab);
}

int main()
{
	char *str = "hello    world    guys   ";
	char c = ' ';
	char **s = ft_split(str, c);
	printf("%s", s[0]);
}
