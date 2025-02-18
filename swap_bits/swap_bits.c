unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}


0101 1010 
0000 0101
1010 0000
