#include <stdio.h>

int main(void) {
  printf("%d", 16 >> 2);
  return 0;
}

/*
16 : 100|00 >> 2

100 : 4
*/