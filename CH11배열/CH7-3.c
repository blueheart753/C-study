#include <stdio.h>

int main(void)
{
    int arr[5] = {0,};
    int firstBigNumer = 0;
    int secondBigNumber = 0;
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j < 5 - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    firstBigNumer = arr[4];
    secondBigNumber = arr[3];

    printf("%d\n%d",firstBigNumer,secondBigNumber);
    return 0;
}