#include <stdio.h>

/* Print Fahr [o,10,...] to Celsius */
/* Float Version */

void main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -50.0;
    upper = 100.0;
    step = 15.0;

    fahr = lower;

    printf("     F       C\n");
    while (fahr <= upper) {
	celsius = 5.0 / 9.0 * (fahr - 32.0);
	printf("%6.0f%8.2f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
