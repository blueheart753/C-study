#include <stdio.h>

int main(void) 
{
    int num = 0;
    scanf("%d", &num);

    if(num > 10) 
    {
        printf("입력하신 숫자 %d는 10을 넘습니다.", num);
    }
    else if(num < 10 && num >= 0)
    {
        printf("입력하신 숫자 %d는 10을 넘지 않고 0을 넘습니다.", num);
    }
    else 
    {
        printf("입력하신 숫자 %d는 0이하의 숫자입니다.", num);
    }
    return 0;
}