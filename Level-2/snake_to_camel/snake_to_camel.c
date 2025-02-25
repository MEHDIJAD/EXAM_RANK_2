#include <unistd.h>
#include <stdlib.h>

char ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
void	snake_to_camel(char *str)
{
	int i = 0;
	int flag = 0;
	char c; 
	while (str[i])
	{
		if (str[i] != '_') //* if not comal 
		{
			if (flag == 1) //* camel exist
			{
				c = ft_toupper(str[i]);
				write(1, &c, 1);
				flag = 0;
			}
			else
				write(1, &str[i], 1);
		}
		if (str[i] == '_')
			flag = 1;
		i++;
	}
}
int main(int ac, char *av[])
{
	if (ac == 2)
		snake_to_camel(av[1]);
	write(1, "\n", 1);
}