#include <unistd.h>
/*
! index move one more time befor exiting the loop
* first it point to '\0' hint i--
* seconde it point to space ro tab befor char one of last word
*/

int main(int ac, char *av[])
{
    int i;
    if (ac == 2)
    {
        i = 0;
        while (av[1][i]) //* go to end str
            i++;
        i--; //*ones to point to last char
        while (av[1][i] <= 32) //*while '\t' or space --
            i--;
        while (av[1][i] > 32) //* while ascii go back
            i--;
        i++; //* ones to point to first char
        while (av[1][i] > 32)
            write(1, &av[1][i++], 1);  
    }
    write(1, "\n", 1);
    return (0);
}