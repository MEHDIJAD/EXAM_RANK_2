#include <string.h>
#include <stdio.h>

/*
* //?  The  strspn()  function  calculates the length (in bytes) of the initial segment of s 
* which consists entirely of bytes in accept.
*/

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if (s[i] == accept[j])
                break;
            j++;
        }
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}

int main(int ac, char *av[])
{
    if (ac == 3)
    {  
        (const char *)av[2];
        printf("%lu\n",strspn((const char *)av[1], (const char *)av[2]));
        printf("%lu\n",ft_strspn((const char *)av[1], (const char *)av[2]));
    }
}