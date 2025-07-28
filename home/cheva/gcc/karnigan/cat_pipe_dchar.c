#include <stdio.h>
/* Use $ cat file_name | ./a.out */

#define cspace ' '
#define ctab '\t'

int c;
int longspaces;
long cnt, ss, tt, cc;

void main() {
  for (cnt = 0; (c = getchar()) != EOF; ++cnt) {
    if(c == cspace) {
      if(longspaces != 1) {
        ++ss;
        putchar(c);
        longspaces = 1;
      }
    } else if(c == ctab) {
      if(longspaces != 1) {
        ++tt;
        putchar(c);
        longspaces = 1;
      }
    } else {
      ++cc;
      putchar(c);
      longspaces = 0;
    }
  }
  printf("\nInput symbols: %ld, Output Chars: %ld, Spaces: %ld, Tabs: %ld\n", cnt, cc, ss, tt);
}
