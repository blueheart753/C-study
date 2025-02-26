#include <stdio.h>

int main(void)
{
    char str [50];
    int i, temp;
    scanf("%s",str);

    while (str[i] != '\0')
    {
        i++;
    }

    for(int j = 0; j < i; j++)
    {
        int maxIndex = str[0];
        if(maxIndex < str[j+1])
        {
            maxIndex = str[j+1];
            temp = maxIndex;
        }
    }
    printf("%c",temp);
    return 0;
}