#include <stdio.h>
#include <stdbool.h>

#define cs ' '
#define ct '\t'
#define cbr '\b'

int c;
int last;
long cnt, ss, tt, cc;


void main() {
  for (cnt = 0; (c = getchar()) != '\n'; ++cnt) {
    if(c == cs) {
      if(last != cbr) {
        ++ss;
        putchar(c);
        last = cbr;
      }
    } else if(c == ct) {
      if(last != cbr) {
        ++tt;
        putchar(c);
        last = cbr;
      }
    } else {
      ++cc;
      putchar(c);
      last = 0;
    }
  }
  printf("\nInput count: %ld, Chars: %ld, Spaces: %ld, Tabs: %ld\n", cnt, cc, ss, tt);
}
