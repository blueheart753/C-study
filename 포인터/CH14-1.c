#include <stdio.h>

int main(void)
{
    int x,y,z;
    int *px, *py, *pz, *tmp;

    px = &x;
    py = &y;
    pz = &z;
    scanf("%d %d %d",px,py,pz);

    tmp = py;
    px = pz;
    py = px;
    pz = tmp;
    
    printf("%d %d %d\n",*px, *py, *pz);
    return 0;
}