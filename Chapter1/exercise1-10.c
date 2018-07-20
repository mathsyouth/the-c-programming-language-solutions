#include <stdio.h>

int main(void)
{
	int c, replaced;

    while((c = getchar()) != EOF) {
        replaced = 0;
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            replaced = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            replaced = 1;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            replaced = 1;
        }
        if (replaced == 0)
            putchar(c);
    }

    return 0;
}

/*
int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }

    return 0;
}
*/
