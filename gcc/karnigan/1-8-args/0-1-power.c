#include <stdio.h>

int power(int m, int n);

int main(){
    int i;
    for (i = 1; i <= 10; ++i)
    {
        printf("%8d%8d%8d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

int power(int base, int n){
    int p;
    for(p = 1; n > 0; --n){
        p = p * base;
    }
    return p;
}