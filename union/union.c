#include <unistd.h>

//? PSODO CODE:
/*
* 1- creat an arr to store chars
* 2- go thought str1 --> if(find !duplicate char print if and stor it to arr)
	* ==> to check it next time we loop 
*/
int ft_isduplicate(char *result, char c)
{
	int i = 0;
	while (result[i])
	{
		if (result[i] == c)
			return (1);
		i++;
	}
	return (0);
}
void ft_union(char *str1, char *str2)
{
	char result[256] = {0};
	int i = 0;
	int j = 0;

	while (str1[i])
	{
		if (!ft_isduplicate(result, str1[i]))
		{
			write(1, &str1[i], 1);
			result[j++] = str1[i];
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (!ft_isduplicate(result, str2[i]))
		{
			write(1, &str2[i], 1);
			result[j++] = str2[i];
		}
		i++;
	}
	write(1, "\n", 1);

}

int main(int ac, char *av[])
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	else
		write(1, "\n", 1);

}

