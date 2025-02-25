#include <unistd.h>

int		ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isuper(int c)
{
	return(c >= 'A' && c <= 'Z');
}
int	ft_islower(int c)
{
	return(c >= 'a' && c <= 'z');
}
/*
* 'a' becomes 'z' ==> 'z' - ('a' - 'a') = 'z' - 0 = z
* to get x alpha: x = 'z' - (c - 'a') OR 'Z' - (c - 'A')
*/
int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (ft_isalpha(argv[1][i]) && ft_islower(argv[1][i]))
				argv[1][i] = 'z' - (argv[1][i] - 'a');
			else if (ft_isalpha(argv[1][i]) && ft_isuper(argv[1][i]))
				argv[1][i] = 'Z' - (argv[1][i] - 'A');
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}