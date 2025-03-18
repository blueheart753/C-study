#include <stdio.h>

int main(void)
{
    int arr[5];
    int rank[5];
    int *parr, *p1, *p2, *pr;

    for (parr = arr; parr < arr + 5; parr++)
    {
        scanf("%d", parr);
    }

    for (pr = rank; pr < rank + 5; pr++)
    {
        *pr = 1;
    }

    for (p1 = arr; p1 < arr + 5; p1++) 
    {
        for (p2 = arr; p2 < arr + 5; p2++) 
        {
            if (*p1 < *p2)  
            {
                *(rank + (p1 - arr)) += 1;
            }
        }
    }

    for (parr = arr, pr = rank; parr < arr + 5; parr++, pr++)
    {
        printf("%d=r%d ", *parr, *pr);
    }

    return 0;
}
