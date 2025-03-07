#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    char * pstr;
    int len = 0;
    scanf("%s",str);
    pstr = strtok(str,"#");
    len = strlen(pstr);

    while(*pstr != '\0')
    {
        pstr++;
    }

    for(int i = 0; i <= len; i++)
    {
        printf("%c",*pstr);
        pstr--;
    }

    return 0;
}