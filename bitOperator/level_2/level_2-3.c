#include <stdio.h>

int main(void) {
  printf("%d", ((3 | 5) & 6) ^ 7);
  return 0;
}

/*
3 | 5

3 : 011
5 :101

111

6 : 110

111
110

110

7 : 111

110
111

001 = 1

*/