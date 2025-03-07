#include <stdio.h>

int main(void)
{
    int ar[50] = {0,}, N;
    int *p;

    scanf("%d",&N);

    for(p = ar; p < ar+N; p++)
    {
        scanf("%d",p);
    }

}