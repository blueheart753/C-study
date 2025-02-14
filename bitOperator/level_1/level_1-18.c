#include <stdio.h>

int main(void) {
  printf("%d\n", 12 >> 1);
  /*
  12 = 1100
  12 >> 1 = 0110 = 6
  */
  return 0;
}