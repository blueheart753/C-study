// 문제 5: 짝수/홀수 판별기
// 사용자로부터 정수를 입력받아 짝수인지 홀수인지 판별하는 프로그램을 작성하세요.
#include <stdio.h>

int main(void)
{
    int num;
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);

    printf(num % 2 == 0 ? "짝수" : "홀수");
    return 0;
}