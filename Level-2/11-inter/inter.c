#include <unistd.h>

/*
* Write a program that takes two strings and displays, without doubles, the
* characters that appear in both strings, in the order they appear in the first
* one.
*/

int ft_isnotdouble(char *stack, char c)
{
    int i = 0;
    while(stack[i])
    {
        if (stack[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void ft_inter(char *av1, char *av2)
{

    char stock[256] = {0};
    int i;
    int j;
    int r;
    i = 0;
    r = 0;
    while (av1[i])
    {
        j = 0;
        while(av2[j])
        {
            if (av2[j] == av1[i] && ft_isnotdouble(stock, av1[i]))
            {
                write(1, &av1[i], 1);
                stock[r++] = av1[i];
                break;
            }
            j++;
        }
        i++;
    }
}
int main(int ac, char *av[])
{
    int i = 0;

    if (ac == 3)
            ft_inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}