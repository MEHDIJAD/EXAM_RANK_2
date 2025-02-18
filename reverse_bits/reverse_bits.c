#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char r = 0;
	int j = 8;

	while (j--)
	{
		r = r * 2 + octet % 2;
		octet /= 2;
	}
	return r;
}

void print_bits(unsigned char octet)
{
	unsigned char a =0;
	int j =8;

	while (j--)
	{
		a = (octet >> j & 1)+ 48;
		write (1, &a, 1);
	}


}
int main()
{
	print_bits(13);
	write (1, "\n", 1);
	print_bits(reverse_bits(13));
}