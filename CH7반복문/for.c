#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 9; i++) 
    //  int i 는 초기식, i < 9는 조건식, i++ 는 증감식이다.
    {
        // 이 스코프 안에있는 코드를 조건식이 만족하지 않는 순간까지 반복한다.
        printf("%d ",i);
    }
    return 0;
}