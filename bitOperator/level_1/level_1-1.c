#include <stdio.h>

int main(void) {
  printf("%d", 5 & 3);
  return 0;
}

/*비트 연산자 '&'
비트 연산자 중 & 는 AND연산자로, 두 수를 이진수로 변환 했을 때 두 수가 1일 때
1을 반환하고, 두 수중 하나라도 0이면 0을 반환한다.
*/