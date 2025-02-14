#include <stdio.h>

int main(void) {
  printf("%d", -128 >> 3);
  return 0;
}

/*
-128 : 10000000 -> 11110000|000

11110000  ->

*/