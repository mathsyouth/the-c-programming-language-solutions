#include <stdio.h>
#include <limits.h>

/* determine the ranges of char, short, int, and long variables, both signed and unsigned. */
int main(void)
{
    printf("The range of char is %d to %d.\n", CHAR_MIN, CHAR_MAX);
    printf("The range of int is %d to %d.\n", INT_MIN, INT_MAX);
    printf("The range of short is %d to %d.\n", SHRT_MIN, SHRT_MAX);
    printf("The range of long is %ld to %ld.\n", LONG_MIN, LONG_MAX);
    printf("The range of singned char is %d to %d.\n", SCHAR_MIN, SCHAR_MAX);
    printf("The range of unsinged char is %d to %u.\n", 0, UCHAR_MAX);
    printf("The range of unsinged int is %d to %u.\n", 0, UINT_MAX);
    printf("The range of unsinged short is %d to %u.\n", 0, USHRT_MAX);
    printf("The range of unsinged long is %d to %lu.\n", 0, ULONG_MAX);
    return 0;
}