// 문제 3: 구구단 출력
// 사용자로부터 숫자(2~9)를 입력받아 해당 단의 구구단을 출력하는 프로그램을 작성하세요.

// 입력: 2~9 사이의 정수
// 출력: 해당 단의 구구단 (예: 3 * 1 = 3 … 3 * 9 = 27)

#include <stdio.h>

int main(void) 
{
    int num;
    printf("2~9까지의 정수를 입력해주세요 : ");
    scanf("%d", &num);

    for(int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}