#include <stdio.h>
int main(void) {
  printf("%d\n", -1 >> 1);
  /*
  -1 = 11111111 11111111 11111111 11111111
  -1 >> 1 = 11111111 11111111 11111111 11111111 = -1
  */
  return 0;
}