#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//! for 804577 the loop will go on intel it get to 804577 and it will print the only prime div

int *fprime(unsigned int nb)
{
    if (nb == 1)
        printf("%d", 1);
    else
    {
        int prime = 2;
        while(nb > 1)
        {
            if (nb % prime == 0)
            {
                printf("%d", prime);
                nb /= prime;
                if (nb > 1)
                    printf("*");
                prime--;
            }
            prime++;
        }
    }   
}

int main(int ac, char *av[])
{
    int n;
    if (ac == 2 && *av[1])
    {
        n = atoi(av[1]);
        if (n < 0)
        {
            printf("\n");
            return (0);   
        }
        fprime(n);
    }
    printf("\n");
    return (0);   
}