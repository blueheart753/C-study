#include <stdio.h>

int main(void)
{
    // 배열을 선언과 동시에 초기화하지만 배열 선언 시 값을 정해주지 않음
    int arr[] = {0,0,0,0,0};
    // for문으로 배열을 순회하면서 출력
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }    
    return 0;
}