#include <stdio.h>

int main(void) {
  printf("%d", -5 >> 2);
  return 0;
}

/*
 5 : 00000101
 -5 : 11111011 -> 111110|11
 1111110
 0000010

-2
*/