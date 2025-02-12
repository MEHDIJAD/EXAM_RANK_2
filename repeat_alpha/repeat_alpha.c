/*
! to get the rep of an alpha:
* we do : char - 'a' + 1 
* exemple --> for 'a' -> 97 - 97 = 0 + 1 = 1 a  
*         --> for 'b' -> 98 - 97 = 1 + 1 = 2 bb
*/

#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    return (c >= 'a' && c <= 'z'|| c >= 'A' && c <= 'Z');
}
int ft_isuper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
int main(int ac, char *av[])
{
    char c;
    int i;
    int rep;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (ft_isalpha(c))
            {
                if (ft_islower(c))
                    rep = c - 'a' + 1;
                else if (ft_isuper(c))
                    rep = c - 'A' + 1;
                while (rep > 0)
                {
                    write(1, &c, 1);
                    rep--;
                }
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}