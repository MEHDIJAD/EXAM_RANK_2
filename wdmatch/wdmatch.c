#include <unistd.h>

int main(int ac, char *av[])
{
	int i, j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while(av[1][i]) //* to loop av1
		{
			while (av[2][j] && av[2][j] != av[1][i]) //* skip char != av[1][i]
				j++;
			if (!av[2][j]) //* if we finish av2 and av1 still ==> this mean we did not find all char from str1 in str2
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
			j++;
		}
		write(1, av[1], i);
	}
	write(1, "\n", 1);
}