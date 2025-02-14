#include <stdio.h>

int main(void) {
  printf("%d", 255 | 0xF0);
  return 0;
}

/*
255 : 011111111
0xF0 : 15 : 1111

011111111
000001111

255
*/