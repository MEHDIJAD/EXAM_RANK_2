#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


unsigned int ft_counttokens(char const *str, char c)
{
    unsigned int count;
    int i;

    count = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == c && str[i])
            i++;
        if (str[i] != c && str[i])
            count++;
        while (str[i] != c && str[i])
            i++;
    }
    return (count);
}


unsigned int ft_count_word(const char *str, int i, char c)
{
    int len;

    len = 0;
    while (str[i] != c && str[i])
    {
        len++;
        i++;
    }
    return (len);
}
char **ft_free(char **vic, int i)
{
    while (i > 0)
        free(vic[--i]);
    free(vic);
    return (NULL);
}
char **ft_split(char const *str, char c)
{
    char **vic;
    unsigned int strscount;
    int i;
    int j;
    int k;

    strscount = ft_counttokens(str, c);
    vic = malloc((strscount + 1) * sizeof(char *));
    if (!vic)
        return (NULL);
    i = 0;
    j = 0;
    while (i < strscount)
    {
        while (str[j] == c && str[j])
            j++;
        vic[i] = malloc((ft_count_word(str, j, c) + 1) * sizeof(char));
        if (!vic[i])
            return (ft_free(vic, i));
        k = 0;
        while ( str[j] != c  && str[j])
        {
            vic[i][k++] = str[j++];
        }
        vic[i][k] = '\0';
        i++;
    }
    vic[i] = NULL;
    return (vic);
}
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i++], 1);
    }
}

int main(int ac, char *av[])
{
    int i = 0;
    if (ac == 2)
    {
        char **ptr = ft_split(av[1], ' ');
        while (ptr[i] != NULL)
            i++;
        while (i > 0)
        {
            ft_putstr(ptr[--i]);
            if (i > 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
    