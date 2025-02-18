int	    is_power_of_2(unsigned int n)
{
	if((n != 0) && ((n == 1) || (n % 2 == 0)))
		return 1;
	return 0;
}
