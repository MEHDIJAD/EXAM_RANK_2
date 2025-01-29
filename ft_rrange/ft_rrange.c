#include <unistd.h>
#include <stdlib.h>
// #include <stdio.h>

int *ft_rrange(int start, int end)
{
    int len = (start > end) ? (start - end + 1) : (end - start + 1);
    int *arr = malloc(sizeof(int) * len);
    int i = 0;

    if (!arr)
        return (NULL);

    while (i < len)
    {
        arr[i] = end; 
        end += (end > start) ? -1 : 1;
        i++;
    }
    // printf("\n");
    return (arr);
}

// int main(int ac, char *av[])
// {
//     if (ac == 3)
//     {
//         int start = atoi(av[1]);
//         int end = atoi(av[2]);
//         ft_rrange(start, end);
//     }
// }
