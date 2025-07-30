#include <stdio.h>

#define LOWER -50
#define UPPER 50
#define STEP 10

float c_from_f(float fahr);

/* Print Fahr [o,10,...] to Celsius */
/* Function Version */

int main(){
    float fahr, celsius;

    printf("%6s%8s\n","F", "C");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
	    printf("%6.0f%8.2f\n", fahr, c_from_f(fahr));
    }

    return 0;
}

float c_from_f(float fahr){
    return 5.0 / 9.0 * (fahr - 32.0);
}
