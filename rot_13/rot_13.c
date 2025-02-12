#include <unistd.h>

int ft_isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}
int ft_islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
void    rot_13(char *str)
{
    while (*str)
    {
        if (ft_islower(*str))
        {
            if (*str + 13 > 'z')
                *str -= 13;
            else
                *str += 13;
        }
        else if (ft_isupper(*str))
        {
            if (*str + 13 > 'Z')
                *str  -= 13;
            else
                *str += 13;
        }
        write(1, str, 1);
        str++;
    }

}

int main(int ac, char *av[])
{
    if (ac == 2)
        rot_13(av[1]);
    write(1, "\n", 1);
}