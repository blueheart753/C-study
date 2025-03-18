# 반복문에 대해서

## 정의
반복문은 똑같은 코드를 여러번 **반복**시킬 때 제어하는 명령문이다. C언어에서 사용되는 반복문은 총 3가지 이다.
- For문
- While문
- Do-While문

## For문
For문은 초기값, 조건식, 증감식으로 이루어져있다.

초기식은 반복을 시작할 숫자이며, 조건식은 언제까지 반복할 지를 정하는 식이다. 마지막으로 증감식은 초기식을 얼마나 증가 시키는지 감소 시키는 지를 정하는 식이다.

```C
#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 9; i++) 
    //  int i 는 초기식, i < 9는 조건식, i++ 는 증감식이다.
    {
        // 이 스코프 안에있는 코드를 조건식이 만족하지 않는 순간까지 반복한다.
        printf("%d ",i);
    }
    return 0;
}
```

## While문
While문은 초기값과 조건식을 비교해 조건이 거짓일 때까지 반복하는 반복문이다.

While문을 종료시키는 방법은 초기 조건식 혹은 While문 스코프 안에서 조건을 걸어 Break를 시키는 방법이 있다.

물론 증감식도 있다. 만약 증감식을 넣지 않는다면 무한히 그 코드만 돌아가는 상태가 되고 만다.

```C
#include <stdio.h>

int main(void) 
{
    int i = 0;

    while(i < 9) 
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}
```
## Do-While문
Do-While문은 기존 While문에 Do라는 코드 블럭을 추가한 것이다. 기존 While과는 다른점은 While문은 조건식을 먼저 검사하고 코드를 실행시켰지만 Do-While은 조건을 마지막에 검사하는 특성을 가지고 있다. 그렇기에 만약 처음부터 조건이 맞지 않게 된다면 While은 그냥 넘어가지만, Do-While은 한 번은 무조건 실행하게 되어있다.

```C
#include <stdio.h>

int main(void) 
{
    int i = 0;
    do
    {
        printf("%d ", i);
        i++;
    }
    while(i < 9);
    return 0;
}
```
