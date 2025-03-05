#include <stdio.h>

int main(void)
{
    char str [7] = {};
    int cnt = 0;
    scanf("%s",str);

    for(int i = 0; i < 7; i++)
    {
        if(str[i] == 'c' && str[i+1] == 'a' && str[i+2] == 't')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}