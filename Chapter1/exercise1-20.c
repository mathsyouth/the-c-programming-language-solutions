#include <stdio.h>

#define TABSTOPPOS 5 /* The tab stops are at very TABSTOPPOS position */

/* replaces tabs in the input with the proper number of blanks to space to the next tab stop */
int main(void)
{
    int i, c, nb, pos;

    nb = 0;  /* the number of blanks */
    pos = 0; /* the position of the current intput character */

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABSTOPPOS - pos % TABSTOPPOS;
            while (nb > 0) {
                putchar(' ');
                --nb;
                ++pos;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 0;
        } else {
            putchar(c);
            ++pos;
        }
    }
}