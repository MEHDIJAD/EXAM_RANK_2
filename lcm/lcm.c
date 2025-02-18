unsigned int    hcf(unsigned int a, unsigned int b)
{
    if (b == 0)
        return (a);
    return hcf(b, a % b);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    return (a / hcf(a, b)) * b;
}