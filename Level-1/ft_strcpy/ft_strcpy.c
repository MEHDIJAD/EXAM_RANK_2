
//* s1 = dst str and s2 = src str

char    *ft_strcpy(char *s1, char *s2)
{
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return (s1);
}