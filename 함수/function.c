#include <stdio.h>

int calcPlus(int a, int b)
{
    return a + b;
}

int main(void) 
{
    int num = calcPlus(5,8);
    printf("%d",num);
    return 0;
}
