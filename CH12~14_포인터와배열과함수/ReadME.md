# CH12. 포인터
## 12-1.
1.
```c
#include <stdio.h>

int main(void)
{
    int num = 10;
    int * ptr1 = &num;
    int * ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;

    printf("%d \n",num);
    return 0;
}
```
위 코드에서 변수 num은 10이고 포인터 ptr1은 num을 가르키고 포인터 ptr2는 ptr1을 가르킨다. 여기서 각각 ptr1과 ptr2의 각각 후위증가를 함으로 결과는 12가 나온다.

2.
```c
#include <stdio.h>

int main(void)
{
    int num1 = 10,num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int * temp;

    *(ptr1) += 10;
    *(ptr2) -= 10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("ptr1 : %d\n",*ptr1);
    printf("ptr2 : %d\n",*ptr2);
    return 0;
}
```

# 포인터와 배열
## 13-1.

1.
```c
#include <stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];

    for(int i = 0; i < 5; i++)
    {
        *(ptr)+=2;
        ptr++;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
```

2.
```c
#include <stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];

    for(int i = 0; i < 5; i++)
    {
        *(ptr)+=2;
        ptr+i;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
```

3.
```c
#include <stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[4];

    for(int i = 0; i < 5; i++)
    {
        *ptr--;
        ptr+i;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
```

4.

```c
#include <stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int *ptr = &arr[0];
    int *ptr1 = &arr[5];
    int temp;
    for(int i = 0; i < 3; i++)
    {
        temp = *ptr;
        *ptr = *ptr1;
        *ptr1 = temp;
        ptr += 1;
        ptr1-=1;        
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
```

# 포인터와 함수
## 14-1.
1.
```c
#include <stdio.h>

void SquareByValue(int num)
{
    printf("%d\n",num*num);
}

void SquareByReference(int *num)
{
    printf("%d\n",*(num)*(*num));
}

int main(void)
{
    int num = 0;
    scanf("%d",&num);

    SquareByValue(num);
    SquareByReference(&num);
    return 0;
}
```

2.
```c
#include <stdio.h>

void Swap(int *num1, int *num2, int *num3)
{
    int temp = *num3;
    *num3 = *num2;
    *num2 = *num1;
    *num1 = temp;
}

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    scanf("%d %d %d",&num1,&num2,&num3);

    Swap(&num1, &num2, &num3);
    printf("%d %d %d",num1,num2,num3);
    return 0;
}
```

## 14-2
1.
배열을 출력하는 함수이기에 혹여나 실수로라도 값이 변경되는 것을 막기 위해서 const를 이용해 선언한 것이다.

2.
ShowData 함수에서 ptr을 상수로 선언하였지만 rptr 라는 포인터 함수에 ptr을 담고, 변수를 출력 후 값을 바꾸는 행위를 하고 있다. 이는 const를 사용하는 이유 중 하나인 값을 변경하지 못하게 하는 기능을 사용하지 못한다.
