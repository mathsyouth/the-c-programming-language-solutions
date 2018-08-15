#include <stdio.h>

float fahr2celsius(float fahr);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* uppter limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = fahr2celsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float fahr2celsius(float fahr)
{
    float celsius;

    celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}