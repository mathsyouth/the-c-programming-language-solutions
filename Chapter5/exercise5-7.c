#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* max #lines to be sorted */
#define ALLOCSIZE 10000 /* size of available space */

char *lineptr[MAXLINES]; /* pointers to text lines */

int readlines(char *lineptr[], int nlines, char *allocbuf);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left , int right);

/* sort input lines */
int main(void)
{
    int nlines;  /* number of input lines read */
    char allocbuf[ALLOCSIZE];  /* storage for alloc */
    
    if ((nlines = readlines(lineptr, MAXLINES, allocbuf)) >= 0) {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}


#define MAXLEN 1000 /* max length of any input lines */
int getnewline(char *, int);


/*readlines: read input lines */
int readlines(char *lineptr[], int maxlines, char *allocbuf)
{
    int len, nlines;
    char line[MAXLEN];
    char *allocp = allocbuf;  /* next free position */

    nlines = 0;
    while ((len = getnewline(line, MAXLEN)) > 0)
        if (nlines >= maxlines || allocbuf + ALLOCSIZE - allocp < len)
            return -1;
        else {                
            allocp += len;
            line[len-1] = '\0'; /* delete newline */
            strcpy(allocp-len, line);
            lineptr[nlines++] = allocp - len;
        }
    return nlines;
}


/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}


int getnewline(char *s, int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}


/* qsort: sort v[left]...v[right] into increasing order */
void qsort(char *v[], int left, int right)
{
    int i, last;

    void swap(char *v[], int i, int j);

    if (left >= right) /* do nothing if array contains */
        return;        /* fewer than two elements */
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}


/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
