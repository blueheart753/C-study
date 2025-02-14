#include <stdio.h>

int main(void) {
  printf("%d", -5 << 2);
  return 0;
}

/*
 -5
 5 : 101
-5 : 00000101 -> 11101100
00010011
00010100

-20
*/