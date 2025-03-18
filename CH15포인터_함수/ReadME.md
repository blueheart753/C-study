# 포인터 함수
함수에는 파라미터 값을 전달받을 수 있게 되어있다. 하지만 기본적으로 함수의 인자 값은 매개변수에 복사가 된다.

```c
#include <stdio.h>

void PrintAddres(int num)
{
    printf("함수 인자 값의 주소 값 : %p",&num);
}

int main(void)
{
    int num = 10;
    printf("메인 함수 내 변수 주소 값 : %p \n",&num);
    PrintAddres(num);
}
```

```txt
출력 결과

메인 함수 내 변수 주소 값 : 0x7fffffffda84 
함수 인자 값의 주소 값 : 0x7fffffffda6c
```

또한 배열은 통째로 넘기는 것은 불가능한 일이다. 배열을 통째로 넘겨받을 수는 없지만, 함수 내에서 배열에 접근할 수 있도록 주소 값을 전달하는 것은 가능하다.

```c
#include <stdio.h>

void PrintAddres(int *num)
{
    printf("함수 인자 값의 주소 값 : %p",num);
}

int main(void)
{
    int num[3] = {1,2,3};
    int * pnum = num;
    printf("메인 함수 내 변수 주소 값 : %p \n", pnum);
    PrintAddres(pnum);
}
```

```txt
출력 결과

메인 함수 내 변수 주소 값 : 0x7fffffffda7c 
함수 인자 값의 주소 값 : 0x7fffffffda7c
```

배열 그 자체를 주는 것 처럼 보이지만 결국에는 주소 값을 전달 해주는 것과 다르지 않는 역할을 한다.
이는 포인터로 인자 값을 전달하는 것과 다르지 않다.
```c
#include <stdio.h>

void PrintAddres(int num[])
{
    printf("함수 인자 값의 주소 값 : %p",num);
}

int main(void)
{
    int num[3] = {1,2,3};
    printf("메인 함수 내 변수 주소 값 : %p \n", num);
    PrintAddres(num);
}
```

```txt
출력 결과

메인 함수 내 변수 주소 값 : 0x7fffffffda7c 
함수 인자 값의 주소 값 : 0x7fffffffda7c
```

## Call by Value 와 Call by Reference
Call by Value 와 Call by Reference는 함수를 호출 하는 방식이다.

단순히 값을 인자 값으로 전달하는 방법을 **Call by Value**라 하며, 메모리에 접근되는 주소 값을 인자 값으로 전달하는 방법을 **Call by Reference**라 한다.

이 둘을 구분하는 법은 함수의 인자로 전달되는 대상에게 있다.

```c
#include <stdio.h>

void Swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1, num2 : %d %d\n",num1, num2);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    printf("num1, num2 : %d %d\n",num1, num2);
    Swap(num1, num2);
    printf("num1, num2 : %d %d\n",num1, num2);
}
```

```txt
출력 결과

num1, num2 : 10 20
num1, num2 : 20 10
num1, num2 : 10 20
```

위 함수 Swap은 변수의 값을 복사 받기에 main함수에서는 아무런 변함이 없는 것을 확인할 수 있다. 이런 형태를 바로 Call by Value라고 한다.

이번에는 Call by Reference다.

```c
#include <stdio.h>

void Swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("num1, num2 : %d %d\n",*num1, *num2);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    printf("num1, num2 : %d %d\n",num1, num2);
    Swap(&num1, &num2);
    printf("num1, num2 : %d %d\n",num1, num2);
}
```

```txt
출력 결과

num1, num2 : 10 20
num1, num2 : 20 10
num1, num2 : 20 10
```
이번에는 주소값을 받은 후 값에 접근하기에 원본에도 영향을 미쳐, 원본의 값 또한 바뀌는 것을 볼 수 있다.