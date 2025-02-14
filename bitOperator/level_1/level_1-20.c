#include <stdio.h>

int main(void) {
  printf("%d", (1 << 5) - 1);
  return 0;
}

/*
1 << 5 = 100000 = 32

32 - 1 = 31
*/