#include <stdio.h>

int main(void) {
  printf("%d", (5 & 3) | (6 ^ 2));
  return 0;
}

/*
    5 & 3
    5 : 101
    3 : 011
    001 | (6 ^ 2)

    6 ^ 2
    6 : 110
    2 : 010

    001 | 100

    001
    100
    101 = 5
*/