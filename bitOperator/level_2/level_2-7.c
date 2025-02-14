#include <stdio.h>

int main(void) {
  printf("%d", 15 & (1 << 3));
  return 0;
}

/*
15 : 1111
1 << 3 : 100

1111
1000

1000 => 8
*/