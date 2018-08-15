#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getnewline(char line[ ], int maxline);
void reverse(char s[ ]);

int main(void)
{
    int len;  /* current line length */
    char line[MAXLINE];  /* current input line */

    while ((len = getnewline(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
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

/* reverse: reverse 's' */
void reverse(char s[ ])
{
    int i, j, temp;

    i = 0;
    while (s[i] != '\0')
        ++i;
    --i;
    if (s[i] == '\n')
        --i;
    j = 0;
    while (j < i) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        --i;
        ++j;
    }
}