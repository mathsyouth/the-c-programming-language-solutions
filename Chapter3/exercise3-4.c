/* itoa: convert n to characters in s */

int abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

/* itoa: convert n to character in s */
void itoa(int n, char s[])
{
    int i, sign;

    sign = n;
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}