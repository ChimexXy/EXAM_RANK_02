#include <unistd.h>

int ft_check(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(c == str[i])
			return 1;
		i++;
	}
	return 0;
}
size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while(s[i])
	{
		if(ft_check(s[i], reject))
			return(i);
		i++;
	}
	return i;
}