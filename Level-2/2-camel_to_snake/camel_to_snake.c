/*
? PSEUDO-CODE:
* 1- go thought the arg 
* 2- when find alpha in uppercase (if condition)
* 3- write '_' + turn the alpha to lowercase
* 4- write normally if condition not met  
* 5- move to the next char of the arg
* 6- new line at the end
*/

#include <unistd.h>

ft_isuper(int c)
{
    return (c <= 'A' && c >= 'Z');
}
int main(int ac, char *av[])
{
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
            if (ft_isuper(av[1][i]))
            {
                write(1, "_", 1);
                av[1][i] += 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}