#include <stdio.h>

int main(void)
{
    int arr[10] = {0,};

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 1; i <= 3; i++)
    {
        printf("%d:",i);
        for(int j = 0; j < 10; j++)
        {
            if(arr[j] == i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}