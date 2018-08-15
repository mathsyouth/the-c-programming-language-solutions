#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getnewline(char line[ ], int maxline);

/* print input lines longer than LONGLINE */

int main(void)
{
    int len;  /* current line length */
    char line[MAXLINE];  /* current input line */

    while ((len = getnewline(line, MAXLINE)) > 0)
        if (len > 1)
            printf("%s", line);
    return 0;
}

/* getnewline: read a line into s, return length */
int getnewline(char s[ ], int lim)
{
    int c, i, j;
    
    // j keeps track of the number of characters copied to string s
    j = 0;
    // i records the length of the input line
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 2) {
            s[j] = c;
            ++j;
        }
    if (c == '\n') {
        while (j > 0 && (s[j-1] == ' ' || s[j-1] =='\t'))
            --j;
        s[j] = c;
        ++j;
    }
    s[j] = '\0';
    return j;
}