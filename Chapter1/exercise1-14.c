#include <stdio.h>

#define MAXCHAR 128

int main(void)
{
    int c, i, j, maxfrequency;
    int frequency[MAXCHAR];

    maxfrequency = 0;

    for (i = 0; i < MAXCHAR; ++i) {
        frequency[i] = 0;
    }

    while ((c = getchar()) != EOF)
        if (c < MAXCHAR)
            ++frequency[c];

    for (i = 0; i < MAXCHAR; ++i)
        if (i != ' ' && i != '\n' && i != '\t' && frequency[i] > maxfrequency)
            maxfrequency = frequency[i];

    printf("draw the histogram with the bars vertical: \n");
    for (i = 0; i < maxfrequency; ++i) {
        printf("%3d |", maxfrequency -i);
        for (j = 0; j < MAXCHAR; ++j) {
            if (j != ' ' && j != '\n' && j != '\t' && frequency[j] > 0) {
                if (i < (maxfrequency - frequency[j]))
                    printf("   ");
                else
                    printf("+  ");
            }
        }
        printf("\n");
    }
    
    printf("     ");
    for (i = 0; i < MAXCHAR; ++i) {
        if (i != ' ' && i != '\n' && i != '\t' && frequency[i] > 0) {
            putchar(i);
            printf("  ");
        }
    }
    printf("\n");

    return 0;
}