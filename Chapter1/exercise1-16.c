#include <stdio.h>

# define MAXLINE 1000 /* maximum input line size */

int getnewline(char line[ ], int maxline);
void copy(char to[ ], char from[ ]);

/* print longest input line */

int main(void)
{
    int len;  /* current line length */
    int max;  /* maximum length seen so far */
    char line[MAXLINE];  /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getnewline(line, MAXLINE)) > 0) {
        printf("%d, %s", len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) /* there was a line */
        printf("%s", longest);
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
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' to 'to'; assume to is big enough */
void copy(char to[ ], char from[ ])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}