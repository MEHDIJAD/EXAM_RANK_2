#include "unistd.h"

int ft_isspace(int c)
{
    return (c == ' ' || c == '\t');
}

int ft_islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
int ft_isuper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(int ac, char *av[])
{
    int i, j;

    if (ac == 1)
    {
        write(1, "\n", 1);
    }
    if (ac > 1)
    {
        i = 1;
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                if (ft_isalpha(av[i][j]) && (j == 0 || ft_isspace(av[i][j - 1])))
                {
                    if (ft_islower(av[i][j]))
                        av[i][j] -= 32;
                }
                else if (ft_isuper(av[i][j]))
                {
                    av[i][j] += 32;
                }
                write(1, &av[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
}