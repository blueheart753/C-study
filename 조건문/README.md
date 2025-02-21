# 조건문
조건문은 주어진 조건과 조건의 대한 결과에 따라 별도의 명령을 수행하는 제어문이다.
조건문에는 총 4가지 형태가 있다.
1. if
2. if - else
3. if - else if - else
4. switch


## if 문
if문은 조건식이 참이면 주어진 코드를 실행하고 거짓이면 아무것도 실행하지 않는다.

```C
#include <stdio.h>

int main(void) 
{
    int a = 5;
    if(a > 3)
    {
        printf("%d", a++);
    }
    return 0;
}
```

## if-else 문
if-else는 주어진 조건식이 참이면
첫 번째 코드블럭에 있는 코드를 실행시키고 거짓이면 두 번째 코드블럭을 실행시킨다.

```C
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
        break;
    }

    return 0;
}
```

## if, if-else
처음 조건에 맞지 않으면 다음 조건을 따지고 그 조건이 맞으면 해당 코드블럭에 있는 코드를 실행시킨다.

```C
#include <stdio.h>

int main(void) 
{
    int a = 5;
    if(a < 3)
    {
        printf("%d", a++);
    }
    else if (a > 3) 
    {
        printf("%d", a+a);
    }
    return 0;
}
```

## if, else-if, else
첫 번째 조건이 성립되지 않으면 다음 else if문으로 그것조차 맞지 않으면 다음 else문의 있는 코드로 넘어간다.

```C
#include <stdio.h>

int main(void) 
{
    int num = 0;
    scanf("%d", &num);

    if(num > 10) 
    {
        printf("입력하신 숫자 %d는 10을 넘습니다.", num);
    }
    else if(num < 10 && num >= 0)
    {
        printf("입력하신 숫자 %d는 10을 넘지 않고 0을 넘습니다.", num);
    }
    else 
    {
        printf("입력하신 숫자 %d는 0이하의 숫자입니다.", num);
    }
    return 0;
}
```