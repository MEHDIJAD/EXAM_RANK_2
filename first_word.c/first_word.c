#include "unistd.h"

int main(int ac, char *av[])
{
    int j;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        j = 0;
        while (av[1][j] && av[1][j] <= 32)
            j++;
        while (av[1][j] && av[1][j] > 32)
            write(1, &av[1][j++], 1); 
        write(1, "\n", 1);   
    }

}