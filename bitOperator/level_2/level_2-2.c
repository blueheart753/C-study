#include <stdio.h>

int main(void) {
  printf("%d", (8 << 2) & (15 >> 1));
  return 0;
}

/*
 8 << 2
 1000|00 = 32

 15 >> 1
 111|1 = 7

 32 & 7

 100000
 000111

 = 0
*/