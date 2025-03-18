#include <stdio.h>

int main(void)
{
    char ch[10] = {0,};
    char alphabet[27] = {0,};
    int num [27] = {0,};
    char *alp = NULL;
    char *pch = NULL;
    int *pnum = NULL;
    int biggestNum = 0;
    scanf("%s",ch);
    alp = alphabet;
    for(int i = 97; i < 97+26; i++,alp++)
    {
        *alp = i;
    }
    
    pch = ch;
    while(*pch !='\0')
    {
        pnum = num;
        for(alp = alphabet; alp < alphabet + 26; alp++,pnum++)
        {
            if(*pch == *alp)
            {
                (*pnum)++;
            }
        }
        pch++;
    }

    for(pnum = num; pnum < num+26; pnum++) {
        if (*pnum >= biggestNum)
        {
            biggestNum = *pnum;
        }
    }

    pnum = num;
    for (alp = alphabet; alp < alphabet + 26; alp++, pnum++)
    {
        if(biggestNum == *pnum)
        {
            printf("%c ",*alp);
            break;
        }
    }

    printf("%d",biggestNum);
    return 0;
}