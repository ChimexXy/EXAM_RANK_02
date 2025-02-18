unsigned char rev_bit(unsigned char octet)
{
	int i = 0;
	unsigned char rev = 0;
	while (i < 8) 
	{
		rev = (rev << 1 | (octet & 1));
		octet = octet >> 1;
		i++;
	}
	return rev;
}

00110 000 oct

0000 0001

0000 0001

0000 0000 

0000 0001



#include <unistd.h>

void print_bit(unsigned char octet)
{
	int div = 128;
	int oct = octet;
	while(div)
	{
		if(div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
			write(1, "0", 1);
		div /= 2;
	}
}
#include <stdio.h>
int main()
{
	print_bit(97);
	printf("\n%d\n", rev_bit(97));
	print_bit(134);
}