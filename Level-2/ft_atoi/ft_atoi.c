int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
int	ft_atoi(const char *str)
{
    int nb;
    int sign;
    int i;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while(ft_isdigit(str[i]))
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * sign);
        
}