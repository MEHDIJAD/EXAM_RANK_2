/*
? PSEUDO-CODE:
* 1- get the number from argv(str) -> atoi
* 2- fprime
    * 1- start from the first prime -> 2
    * 2- while we did not reach 1
    * 3- if nb devided by prime number 
    * 4- print number 
    * 5- if it still divisble, print * 
    ! 6- prime-- to devide by the same prime number two times if possible
    * 7- prime++ to move t the  next number
    !NB: by defaut starting from 2 and ancressing intill number bocomes 1 works !

*/

#include <stdio.h>
#include <stdlib.h>


void    fprime(unsigned int nb)
{
    if (nb == 1) //* special case for 1  
        printf("%d", 1);
    else
    {
        int prime = 2; //* start with the first prime number
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
        n = atoi(av[1]); //* to get the number from str argv
        if (n >= 0) //* only positive
            fprime(n);
    }
    printf("\n");
    return (0);   
}