#include <stdio.h>

/* Print Fahr [o,10,...] to Celsius */

void main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = -50;
    upper = 50;
    step = 10;

    celsius = lower;
    printf("     F     C\n");

    while (celsius <= upper) {
	fahr = 9 * celsius / 5 + 32;
	printf("%6d%6d\n", fahr, celsius);
	celsius = celsius + step;
    }
}
