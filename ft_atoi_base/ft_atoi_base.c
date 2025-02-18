int ft_check_base(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sig = 1;

	if(str_base <= 16)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				sig *= -1;
			i++;
		}
		while (str[i] && ft_check_base(str[i], str_base))
		{
			if (str[i] >= 'A' && 'F' >= str[i])
				res = (res * str_base) + (str[i] - 'A' + 10);
			else if (str[i] >= 'a' && 'f' >= str[i])
				res = (res * str_base) + (str[i] - 'a' + 10);
			else
				res = (res * str_base) + (str[i] - '0');
			i++;
		}
	}
	return(res * sig);
}