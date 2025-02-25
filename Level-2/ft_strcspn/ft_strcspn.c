#include <string.h>
#include <stdio.h>

/*
//*? The strcspn() function calculates the length of the initial segment 
* of s which consists entirely of bytes not in reject.
*/
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i, j;

    i = 0;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return (i);
}

int main(void)
{
    const char *s = "abcdef";
    const char *reject = "ef";

    printf("%lu\n",strcspn(s, reject));
    printf("%lu\n",ft_strcspn(s, reject));
}