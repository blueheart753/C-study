#include <stdio.h>

int main(void) {
  printf("%d\n", 6 ^ 4);
  /*
  6 = 0110
  4 = 0100
  6 ^ 4 = 0010 = 2
  */
  return 0;
}