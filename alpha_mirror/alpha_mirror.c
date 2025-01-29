int		is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (is_alpha(argv[1][i]) && (argv[1][i] >= 'a' && argv[1][i] <= 'z')) // if (alpha and lowercase) ==> char = 'z' - (char - 'a')
				argv[1][i] = 'z' - (argv[1][i] - 'a');
			else if (is_alpha(argv[1][i]) && (argv[1][i] >= 'A' && argv[1][i] <= 'Z')) // if (alpha and uppercase) ==> char = 'Z' - (char - 'A')
				argv[1][i] = 'Z' - (argv[1][i] - 'A');
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}