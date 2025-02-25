

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) & 0x0F) | ((octet & 0x0F) << 4);
}