#include <stdio.h>

int main(void) {
  printf("%d\n", ~6);
  /*
  6 = 00000000 00000000 00000000 00000110
  ~6 = 11111111 11111111 11111111 11111001 = -7
  */
  return 0;
}