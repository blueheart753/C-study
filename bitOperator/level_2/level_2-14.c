#include <stdio.h>

int main(void) {
  printf("%d", 255 ^ 0xFF);
  return 0;
}

/*
255 : 011111111
FF : 1111 1111
011111111
011111111

0
*/