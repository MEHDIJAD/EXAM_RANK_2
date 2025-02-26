#include <string.h>
#include <stdio.h>

//*? The strcspn() function calculates the length of the initial segment 
//* of s which consists entirely of bytes not in reject.

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i, j;

    i = 0;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j]) //* if find reject return !
                return(i);
            j++;
        }
        i++;
    }
    return (i);
}

int main(int ac, char *av[])
{
     if (ac == 3)
    { 
        printf("%lu\n",strcspn((const char *)av[1], (const char *)av[2]));
        printf("%lu\n",ft_strcspn((const char *)av[1], (const char *)av[2]));
    }
}