#include <stdio.h>

int main(void) {
  printf("%d\n", ~6);

  /*
  6  : 00000110
  ~  : 11111001 (2의 보수: -7)
  결과 : -7
  */

  return 0;
}
