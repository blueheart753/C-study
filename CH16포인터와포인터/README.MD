# 포인터와 포인터
포인터 변수를 가르키는 포인터 변수를 뜻하며 더블 포인터라고 부른다.
디증 포인터 변수의 차이는 포인터 변수가 가르키는 대상일 뿐이다.

다중 포인터 변수는 포인터 변수를 가르키고 포인터 변수는 일반 변수를 가르킨다.

```c
#include <stdio.h>

int main(void)
{
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n",ptr,*dptr);
    printf("%9g %9g \n",num,**dptr);
    ptr2 = *dptr;
    *ptr = 10.99;

    printf("%9g %9g \n",num,**dptr);
    return 0;
}
```
## 포인터 변수 대상의 Call by Refernce
```c
#include <stdio.h>

void SwapIntPtr(int *p1, int *p2)
{
    int * temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2: %d %d\n",*ptr1, *ptr2);

    SwapIntPtr(ptr1,ptr2);
    printf("*ptr1, *ptr2: %d %d\n",*ptr1, *ptr2);
    return 0;
}
```

실행결과는 바뀌지 않았다.
```txt
실행결과

10 20
10 20
```
왜냐하면 ptr1과 p1, 그리고 ptr2와 p2는 별갠이기 때문이다.

```c
#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2)
{
    int * temp = *dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2: %d %d\n",*ptr1, *ptr2);
    SwapIntPtr(&ptr1, &ptr2);
    printf("*ptr1, *ptr2: %d %d\n",*ptr1, *ptr2);
    return 0;
}
```

```txt
실행결과

10 20
20 10
```
이번에는 성공적으로 전환되었다.

## 더블 포인터의 배열
```c
#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 20, num3 =30;
    int *ptr1 = & num1;
    int *ptr2 = & num2;
    int *ptr3 = & num3;

    int * ptrArr[] = {ptr1, ptr2, ptr3};
    int **dptr=ptrArr;
    
    printf("%d %d %d\n",*(ptrArr[0]),*(ptrArr[1]),*(ptrArr[2]));
    printf("%d %d %d\n",*(dptr[0]),*(dptr[1]),*(dptr[2]));

    return 0;
}
```
포인터 변수는 배열처럼 사용가능하기에 배열을 정상적으로 가르키는 포인터라면 어떠한 경우도 성립한다.