#include <stdio.h>

int main(void)
{
    int arr[10] = {0,};
    int *pnum = arr + 9;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d" ,&arr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ",*pnum);
        pnum--;
    }

    return 0;
}