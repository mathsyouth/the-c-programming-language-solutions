#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define LONGLINE 80

int getnewline(char line[ ], int maxline);

/* print input lines longer than LONGLINE */

int main(void)
{
    int len;  /* current line length */
    char line[MAXLINE];  /* current input line */

    while ((len = getnewline(line, MAXLINE)) > 0)
        if (len > LONGLINE)
            printf("%s", line);
    return 0;
}

/* getnewline: read a line into s, return length */
int getnewline(char s[ ], int lim)
{
    int c, i;
    
    // i records the length of the input line
    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}