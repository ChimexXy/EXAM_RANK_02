#include <stdio.h>
#include <unistd.h>

unsigned char reverse_bit(unsigned char octet)
{ 
	unsigned char reversed = 0;
	int i = 0;

    while (i < 8) {
        reversed = (reversed << 1) | (octet & 1);
        octet = octet >> 1;
		i++;
    }

    return reversed;
}

int main()
{
	unsigned char c = 93;
	printf("%d\n", reverse_bit(c));
}