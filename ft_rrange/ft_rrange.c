/*
? PSEUDO-CODE:
*
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_size(int start, int end)
{
    int len;

    len = 0;
    if (start > end)
        len = start - end;
    else
        len = end - start;
    return (len);
}
int     *ft_rrange(int start, int end)
{
    int arr_len;
    int *arr;
    int i;

    arr_len = ft_size(start, end) + 1;
    arr = malloc(sizeof(int) * arr_len);
    if (!arr)
        return (NULL);
    i = 0;
    while (i < arr_len)
    {
        arr[i++] = end;
        end += (end > start) ? -1 : 1;
    }
    return (arr);
}

int main(int ac, char *av[])
{
    int start;
    int end;
    int size;
    int *arr;
    int i;

    if (ac == 3)
    {
        start = atoi(av[1]);
        end = atoi(av[2]);
        size = ft_size(start, end);
        arr = ft_rrange(start, end);
        i = 0;
        while (i <= size)
        {
            printf("%d ", arr[i]);
            i++;
        }   
    }
}
