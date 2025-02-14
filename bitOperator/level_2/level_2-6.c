#include <stdio.h>

int main(void) {
  printf("%d", 7 & (~7));
  return 0;
}

/*
7 : 110
~7: 001

0
*/