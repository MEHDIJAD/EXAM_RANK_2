#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reversed = 0;
	int i = 0;

	while (i < 8)
	{
		reversed = (reversed << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (reversed);
}

void	print_bits(unsigned char octet)
{
	int i = 7;

	while (i >= 0)
	{
		char bit;
		if ((octet >> i) & 1)
			bit = '1';
		else
			bit = '0';
		write(1, &bit, 1);
		i--;
	}
}

int main()
{
	print_bits(97);
	write (1, "\n", 1);
	print_bits(reverse_bits(97));
}