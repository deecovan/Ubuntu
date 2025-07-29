#include <stdio.h>

#define LOWER -50
#define UPPER 50
#define STEP 10

/* Print Fahr [o,10,...] to Celsius */
/* For() Version */

void main()
{
    float fahr, celsius;

    printf("%6s%8s\n","F", "C");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
	celsius = 5.0 / 9.0 * (fahr - 32.0);
	printf("%6.0f%8.2f\n", fahr, celsius);
    }
}
