#include <stdio.h>

int main(void) {
  printf("%d\n", 9 | 12);
  /*
  9 = 1001
  12 = 1100
  9 | 12 = 1101 = 13
  */
  return 0;
}