/* setbits: return x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return (x & ((~0 << (p+1)) | ~(~0 << (p+1-n)))) | ((y & ~(~0 << n)) << (p+1-n));
}