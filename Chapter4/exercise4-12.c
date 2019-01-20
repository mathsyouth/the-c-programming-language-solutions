#include <stdio.h>

int itoa(int, int, char []);


int main(void)
{
    int n = -123456789;
    int i = 0;
    char s[11];

    i = itoa(n, i, s);
    printf("字符长度为：%d\n", i);
    printf("字符为：%s\n", s);

    return 0;
}


/* itoa: convert n to characters in s */
int itoa(int n, int i, char s[])
{
    if (n < 0) { /* record sign */
        s[i++] = '-';
        n = -n;
    }
    if (n / 10 > 0)
        i = itoa(n / 10, i, s);
    s[i++] = n % 10 + '0'; /* get next digit */
    s[i] = '\0';
    return i;
}
