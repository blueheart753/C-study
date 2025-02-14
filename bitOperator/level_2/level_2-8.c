#include <stdio.h>

int main(void) {
  printf("%d", 15 | (1 << 4));
  return 0;
}

/*
15 : 1111
1 << 4 : 10000

01111
10000

11111

31
*/