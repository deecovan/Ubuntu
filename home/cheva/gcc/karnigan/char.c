#include <stdio.h>

char c;

void main() {
    c = getchar();
    while (c != '\n') {
        putchar(c);
        c = getchar();
    }
}
