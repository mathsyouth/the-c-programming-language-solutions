#include <stdio.h>

#define IN 1   // inside a word
#define OUT 0  // outside a word

int main(void)
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                printf("\n");
                state = OUT;
            }
        }
        else {
            putchar(c);
            if (state == OUT)
                state = IN;
        }
    }

    return 0;
}

/*
int main(void)
{
    int current, previous; // current = current character, previous = previous character

    previous = ' ';
    while ((current = getchar()) != EOF) {
        if (current == ' ' || current == '\n' || current == '\t') {
            if (previous != ' ' && previous != '\n' && previous != '\t') {
                printf("\n");
            }
        }
        else
            putchar(current);
        previous = current;
    }

    return 0;
}
*/