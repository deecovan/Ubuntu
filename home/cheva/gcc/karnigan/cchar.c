#include <stdio.h>

int c;
long cnt = 0;

void main() {
    while ((c = getchar()) != '\n') {
        putchar(c);
	++cnt;
    }
    printf("\nCount: %ld\n", cnt);
}
