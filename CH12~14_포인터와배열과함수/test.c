#include <stdio.h>

void Swap(int *num1, int *num2, int *num3)
{
    int temp = *num3;
    *num3 = *num2;
    *num2 = *num1;
    *num1 = temp;
}

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    scanf("%d %d %d",&num1,&num2,&num3);

    Swap(&num1, &num2, &num3);
    printf("%d %d %d",num1,num2,num3);
    return 0;
}