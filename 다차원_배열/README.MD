# 다차원 배열
다차원 배열은 2차원 이상의 배열을 뜻한다.
2차원 배열은 평면적인 구조, 3차원 배열은 정육면체 구조의 배열이다.

## 2차원 배열
```c
int arr[10];
```
기존의 1차원 배열은 배열 타입, 배열 명, 배열 크기로 선언이 된다. 2차원 배열은 여기서 배열크기가 하나 더 추가되, 2개의 배열 크기를 가진다.

```c
int arr[10][10];
```
가로가 10 세로가 10인 배열을 선언한 것이다.

```c
#include <stdio.h>

int main(void)
{
    int arr1[3][4];
    int arr2[7][9];
    printf("세로 3, 가로4 : %d",sizeof(arr1));
    printf("세로 7, 가로9 : %d",sizeof(arr2));

    return 0;
}
```

2차원 배열의 접근하는 방법은 1차원 배열 접근 하는 법과 똑같다.

1차원 배열 접근
```c
int arr [10];
arr[0] = 10;
```

2차원 배열 접근
```c
int arr[10][2];
arr[0][0] = 12;
```

## 2차원 배열 초기화

2차원 배열을 초기화하는 방법 또한 1차원 배열 초기화 하는 것과 다르지 않다.

```c
#include <stdio.h>

int main(void)
{
    int arr[10][10] = {{10,10,20}};

    printf("%d",arr[0][2]);
    return 0;
}
```

물론 초기화를 따로 하지 않으면 1차원 배열과 같이 0으로 전부 초기화가 자동적으로 이루어진다.