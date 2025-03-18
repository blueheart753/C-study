#include <stdio.h>

int main(void) 
{
    int a = 5;
    if(a < 3)
    {
        printf("%d", a++);
    }
    else if (a > 3) 
    {
        printf("%d", a+a);
    }
    return 0;
}