#include <stdio.h>

int main(void)
{
    char ch[10] = {0,};
    char alphabet[29] = {0,};
    int num [29] = {0,};
    char *alp = NULL;
    char *pch = NULL;
    int *pnum = NULL;
    int biggestNum = 0;
    scanf("%s",ch);
    pch = ch;
    alp = alphabet;
    for(int i = 97; i < 97+28; i++,alp++)
    {
        *alp += i;
    }
    
    for(alp = alphabet; alp < alp+28; alp++)
    {
       for(pnum = num; pnum < pnum+28; pnum++)
       {    
        if(*pch == *(pnum)+97)
        {
            *pnum += 1;
        }
       }
    }

    for(pnum = num; pnum < pnum+28; pnum++) {
        if(*pnum > *pnum+1){
            biggestNum = *pnum;
        }
    }

    printf("%d",biggestNum);
    return 0;
}