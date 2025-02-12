/*
? PSEUDO-CODE:
* from 1 to 100
* if we have a number that a multiple of 3 && 5 -> write fizzbuzz
! we have to address this first because if we put it second or last condition:
! we get fizz or buzz isted of fizzbuzz
* else -> put number
*/

#include <unistd.h>

//* mini ft_number
void ft_putnumber(int n)
{
    if (n > 9)
        ft_putnumber(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}
int main(int ac, char *av[])
{
    int i = 1;

    while (i <= 100)
    {
        //* we have to address this first 
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnumber(i);
        write(1, "\n", 1);
        i++;
    }
}