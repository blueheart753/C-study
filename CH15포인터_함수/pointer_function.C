#include <stdio.h>

void Swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("num1, num2 : %d %d\n",*num1, *num2);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    printf("num1, num2 : %d %d\n",num1, num2);
    Swap(&num1, &num2);
    printf("num1, num2 : %d %d\n",num1, num2);
}