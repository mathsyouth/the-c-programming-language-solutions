#include <stdio.h>

/* htoi: convert a string of hexadecimal digits to integer */
int htoi(char s[ ])
{
    int i, n, hexdigit;
    int ishex = 0;

    i = 0;
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
            ishex = 1;
    }
    
    n = 0;
    for ( ; ishex == 1; ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            hexdigit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        else
            ishex = 0;
        if (ishex == 1)
            n = n * 16 + hexdigit;
    }

    return n;
}