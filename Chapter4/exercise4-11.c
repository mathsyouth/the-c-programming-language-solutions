#include <ctype.h>
#include "calc.h"

int getch(void);

/*getop: get next character or numeric operand */
int getop(char s[])
{
    int i, c;
    static int lastc = 0;

    if (lastc == 0)
        c = getch();
    else {
        c = lastc;
        lastc = 0;
    }

    while ((s[0] = c) == ' ' || c == '\t')
        c = getch();
    s[1] = '\0';
    if (!isdigit(c) && c != '.' && c != '-')
        return c; /* not a number */
    i = 0;
    if (c == '-') {
        if (isdigit(c = getch()) || c == '.')
            s[++i] = c; /* negative number */
        else {
            if (c != EOF)
                lastc = c;
            return '-';  /* minus operator */
        }
    }
    if (isdigit(c)) /* collect integer part */
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.') /* collect fraction part */
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        lastc = c;
    return NUMBER;
}
