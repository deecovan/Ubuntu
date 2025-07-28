#include <stdio.h>

int c;
long cnt;

void main() {
    for (cnt = 0; (c = getchar()) != '\n'; ++cnt) {
        putchar(c);
    }
    printf("\nCount: %ld\n", cnt);
}
