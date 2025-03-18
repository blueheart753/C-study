#include <stdio.h>

int main(void)
{
    int x[3];
    int *px = NULL;
    int *py = NULL;

    for(px = x; px < x+3; px++)
    {
        scanf("%d",px);
    }

    for(px = x; px < x+3; px++)
    {
        for(py = x; py < x+3 - 1; py++)
        {
            if(*py > *(py+1))
            {
                int temp = *py;
                *py = *(py+1);
                *(py+1) = temp;
            }
        }
    }

    for(px = x; px < x+3; px++)
    {
        printf("%d",*++px);
        break;
    }
    return 0;
}