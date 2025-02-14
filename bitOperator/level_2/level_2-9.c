#include <stdio.h>

int main(void) {
  printf("%d", 10 ^ (1 << 1));
  return 0;
}

/*
10 : 1010
1 << 1 : 10

1010
0010

1000

8
*/