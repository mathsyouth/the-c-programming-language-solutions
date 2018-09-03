int i = 0;
int loop = 1;

while (loop == 1) {
    if (i >= lim -1)
        loop = 0;
    else if ((c=getchar()) == '\n')
        loop = 0;
    else if (c == EOF)
        loop = 0;
    else {
        s[i] = c;
        ++i;
    }
}