#include <ctype.h>

int getch(void);
void ungetch(int);

/*getfloat: get next floating-point from input into *pn */
int getfloat(double *pn)
{
    int c, sign;

    double power;

    while (isspace(c = getch())) /* skip white space */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); /* it's not a number */
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0.0; isdigit(c); c = getch())
        *pn = 10.0 * *pn + (c - '0');
    if (c == '.')
        c = getch();
    for (power = 1.0; isdigit(c); c = getch()) {
        *pn = 10.0 * *pn + (c - '0');
        power *= 10.0
    }

    *pn /= power;
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
