#include <stdio.h>
int main(void) {
    float fahr, celsius;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    printf("  F     C\n\n");
    for (fahr = upper; fahr >= lower; fahr = fahr - step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}