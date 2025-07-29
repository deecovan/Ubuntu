#include <stdio.h>
/* Use $ cat cat2text.txt | ./cat2pipe.out */

#define cspace ' '
#define ctab '\t'
#define cnew '\n'

int c;
int longspaces, inword, words;
long cnt, ss, tt, cc, cn, cw;

void main() {
  for (cnt = 0; (c = getchar()) != EOF; ++cnt) {
    if(c == cspace) {
      if(longspaces != 1) {
        ++ss;
        putchar(c);
        longspaces = 1;
        inword = 0;
      }
    } else if(c == ctab) {
      if(longspaces != 1) {
        ++tt;
        putchar(c);
        longspaces = 1;
        inword = 0;
      }
    } else if(c == cnew){
      ++cn;
      putchar(c);
      longspaces = 0;
      inword = 0;
    } else {
      ++cc;
      putchar(c);
      longspaces = 0;
      if(inword != 1) {
        ++cw;
        inword = 1;
      }
    }
  }
  printf("\n\n");
  printf("Input symbols: %ld, Output Chars: %ld, Spaces: %ld, Tabs: %ld", cnt, cc, ss, tt);
  printf("\n");
  printf("Words: %ld, Lines: %ld", cw, cn);
  printf("\n\n");
}
