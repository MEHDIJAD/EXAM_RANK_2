#include <unistd.h>
#include <stdio.h>

int ft_isspaces(int c)
{
    return(c == 32 || c == '\t');
}

size_t ft_strlen(char *str)
{
    size_t len = 0;

    while (str[len])
        len++;
    return(len);
}

char    *ft_strrev(char *str)
{
    size_t len = ft_strlen(str);
    int i = 0;
    char temp;

    while(i  < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
    return (str);
}

int main(int ac, char *av[])
{
    if (ac == 2)
    {
       printf("%s\n",ft_strrev(av[1]));
    }
    return (0);
}
