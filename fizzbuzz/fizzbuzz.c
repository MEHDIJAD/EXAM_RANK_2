#include <unistd.h>

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