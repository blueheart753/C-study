#include <stdio.h>

int main(void) {
  printf("%d", 255 & 0xF);
  return 0;
}

/*
    255

    256 128 64 32 16 8 4 2 1
    0   1   1  1  1  1 1 1 1

    011111111
    000001111

    15
*/