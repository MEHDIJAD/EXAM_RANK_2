#include <unistd.h>

int ft_isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}
int ft_islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

void rotone(char *str)
{
    while (*str)
    {
        if (ft_islower(*str))
        {
            if (*str == 'z')
                *str = 'a';
            else
                *str += 1;
        }
        else if (ft_isupper(*str))
        {
            if (*str == 'Z')
                *str = 'A';
            else
                *str += 1;
        }
        write(1, str, 1);
        str++;
    }
    

}

int main(int ac, char *av[])
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
}