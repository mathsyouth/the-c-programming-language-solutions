#include <stdio.h>

#define MAXWORDLEN 50

int main(void)
{
    int c, i, j, maxlength;
    int nlength[MAXWORDLEN];

    maxlength = 0;

    for (i = 0; i < MAXWORDLEN; ++i)
        nlength[i] = 0;
    
    i = 0; 
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t')
            ++i;
        else if (i > 0) {
            ++nlength[i];
            i = 0;
        }
    }

    printf("draw the histogram with the bars horizontal: \n");
    for (i = 1; i < MAXWORDLEN; ++i) {
        if (nlength[i] > 0) {
            if (nlength[i] > maxlength)
                maxlength = nlength[i];
            printf("%3d  | ", i);
            for (j = 0; j < nlength[i]; ++j)
                printf("=");
            printf("\n");
        }
    }
    
    printf("\n");
    printf("draw the histogram with the bars vertical: \n");
    for (i = 0; i < maxlength; ++i) {
        printf("%3d  | ", maxlength - i);
        for (j = 1; j < MAXWORDLEN; ++j) {
            if (nlength[j] > 0) {
                if (i < (maxlength - nlength[j]))
                    printf("    ");
                else
                    printf("+   ");
            }
        }
        printf("\n");
    }

    printf("     ");
    for (i = 1; i < MAXWORDLEN; ++i)
        if (nlength[i] > 0)
            printf("%3d ", i);
    printf("\n");

    return 0;
}