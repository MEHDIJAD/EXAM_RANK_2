#include <stdio.h>
#include <stdlib.h>


int ft_counttokens(char *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && str[i] == c)
            i++;
        if (str[i] && str[i] != c)
            count++;
        while (str[i] && str[i] != c)
            i++;
    }
    return (count);
}
int ft_countword(char *str, int j, char c)
{
    int i = 0;
    int count = 0;

    while (str[j] && str[j] != c)
    {
        count++;
        j++;
    }
    return (count);
}
char **ft_free(char **split, int i)
{
    while (i > 0)
        free(split[--i]);
    free(split);
    return (NULL);
}
char **ft_fillstr(char **split, char *str, char c)
{
    int i = 0;
    int j = 0;
    int k;
    int t = ft_counttokens(str, c);
    
    while (i < t)
    {
        while (str && str[j] == c)
            j++;
        split[i] = malloc((ft_countword(str, j, c) + 1) * sizeof(char));
        if (!split[i])
            return (ft_free(split, i));
        k = 0;
        while(str[j] && str[j] != c)
            split[i][k++] = str[j++];
        split[i][k] = '\0';
        i++;
    }
    split[i] = NULL;
    return (split);
}
char    **ft_split(char *str)
{
    char c = ' ';
    int t = ft_counttokens(str, c);
    char ** split;
    split = malloc(sizeof(char *) * (t + 1));
    if (!split)
        return (NULL);
    ft_fillstr(split, str, c);
    return (split);
}

int main(int ac , char *av[])
{
    if (ac == 2)
    {
        int t = ft_counttokens(av[1], ' ');
        char **ptr = ft_split(av[1]);
        for(int i = 0; i < t; i++)
        {
            printf("%s\n", ptr[i]);
        }
    }
}