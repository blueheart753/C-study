#include <stdio.h>

int main(void) {
  printf("%d\n", 9 ^ 12);
  /*
  9 = 1001
  12 = 1100
  9 ^ 12 = 0101 = 5
  */
  return 0;
}