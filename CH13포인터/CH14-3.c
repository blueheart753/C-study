#include <stdio.h>

int main(void)
{
    int ar[50] = {0,}, N;
    int *p;
    int cnt = 0;

    scanf("%d",&N);
    for(p = ar; p < ar+N; p++)
    {
        scanf("%d",p);
    }

    for(p = ar; p < ar+N; p++)
    {
        if(*p != 0)
        {
            cnt++;
        }
        else {
            break;
        }
    }

    printf("%d",cnt);
}