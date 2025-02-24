// 문제 4: 별 찍기 프로그램
// 사용자로부터 정수 n을 입력받아 아래와 같은 형태로 별을 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void)
{
    int num;
    printf("2 ~ 9 사이의 수를 입력해주세요 : ");
    scanf("%d",&num);

    for(int i = 0; i<num; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}