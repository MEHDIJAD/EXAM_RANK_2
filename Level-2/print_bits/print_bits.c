#include <unistd.h>

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


int main(void)
{
	char c = 97;
	print_bits(c);
}