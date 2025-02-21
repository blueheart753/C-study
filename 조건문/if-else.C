#include <stdio.h>

int main(void)
{
    char hello [12] = "Hello World";
    char tartget [] = "Hello World";

    for(int i = 0; i<12; i++) 
    {
        if(hello[i] == tartget[i])
        {
            printf("안녕");
        }
        else
        {
            printf("안녕하지 못해");
        }
    }

    return 0;
}