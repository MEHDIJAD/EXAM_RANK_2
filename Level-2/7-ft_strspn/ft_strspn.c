#include <string.h>
#include <stdio.h>

/*
*? :The  strspn()  function  calculates the length (in bytes) of the initial segment of s 
* which consists entirely of bytes in accept.
*/

//? PSODOCODE:
/*
* 1- out-loop(1): while am at str
* 2- in-loop(2): while am at accept
* 3- if(we find a mach!) ==> break -> i++ count it in 
*  - esle j++ -> move to next char
* 4- not find && we still have accept -> resat and do 1- 2- 3-
*  ! if pass all chars from str and not find accept (if(!accept)) is valid -> '\0' !!!
* return (i ==> count of accept in str)
*/

//! order do not matter==> s = hello, accept = eh , output = 2 ?!

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if (s[i] == accept[j]) //* if find
                break; //! stops the loop that it hold it
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
        printf("%lu\n",strspn((const char *)av[1], (const char *)av[2]));
        printf("%lu\n",ft_strspn((const char *)av[1], (const char *)av[2]));
    }
}