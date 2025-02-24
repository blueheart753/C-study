// 문제 1: 간단한 계산기 만들기
// 사용자로부터 두 개의 정수를 입력받아 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 작성하세요.

// 입력: 두 개의 정수
// 출력: 덧셈, 뺄셈, 곱셈, 나눗셈 결과 (나눗셈은 실수형으로 출력)
#include <stdio.h>

int main(void) 
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %.2f\n", a, b, (double)a / b);
    return 0;
}