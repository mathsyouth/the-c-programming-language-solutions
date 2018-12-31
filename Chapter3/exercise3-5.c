int abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

/* itob: convert the integer n into base b character representation
*  in the string s */
void itob(int n, char s[], int b)
{
    int i, j, sign;

    sign = n;
    i = 0;
    do {
        j = abs(n % b);
        s[i++] = (j <= 9) ? j+'0' : j-10+'a';
    } while ((n /= b) != 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}