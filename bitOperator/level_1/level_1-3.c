#include <stdio.h>

int main(void) {
  printf("%d", 5 ^ 3);
  return 0;
}

/*비트 연산자 '^'
비트연산자 ^ 는 XOR연산자로 이진수로 변환된 두 수가 1일 때 0을 반환하고 한 수가
0이면 1을 반환한다. 만약 둘다 0일 경우 0을 반환한다.
*/