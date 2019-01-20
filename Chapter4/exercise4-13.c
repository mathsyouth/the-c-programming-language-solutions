#include <stdio.h>
#include <string.h>

void reverse(int, int, char []);

int main(void)
{
    char s[] = "Hello, world!";
    printf("The string is: %s\n", s);
    printf("The string length is : %lu\n", strlen(s));
    reverse(0, strlen(s) - 1, s);
    printf("The reverse string is: %s\n", s);

    return 0;
}

/* reverse: reverse string s in place */
void reverse(int i, int j, char s[])
{
    if (i < j) {
        int c;
        c = s[i], s[i] = s[j], s[j] = c;
        reverse(++i, --j, s);
    }
}
