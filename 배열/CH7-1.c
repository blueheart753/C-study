#include <stdio.h>

int main(void)
{
    int arr[5] = {0,};
    int avg = 0;
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    avg = sum/5;

    for(int i = 0; i < 5; i++)
    {
        if(avg < arr[i])
        {
            printf("%d\n",arr[i]);
        }
    }


    return 0;
}