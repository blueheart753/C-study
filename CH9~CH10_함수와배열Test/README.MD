# 09문제

## 9-1

1.
```c
#include <stdio.h>

int biggestNumber(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
    
}

int main(void)
{
    int num1, num2, num3;
    printf("세 개의 정수를 입력해주세요 : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("세 개의 정수 %d %d %d 중 가장 큰 수는 %d입니다.",num1,num2,num3,biggestNumber(num1,num2,num3));

    return 0;
}
```

2.
```c
#include <stdio.h>

double formatingFahrenheit(double celsius)
{
    return 1.8 * celsius + 32;
}

int main(void)
{
    double celsius;
    printf("섭씨 온도를 입력해주세요 : ");
    scanf("%lf",&celsius);
    printf("섭씨 %.1f도는 화씨 %.1f입니다.",celsius,formatingFahrenheit(celsius));
    return 0;
}
```
3.
```c
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, sum;

    printf("%d %d ", a, b);

    for (int i = 2; i < n; i++) {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("출력할 피보나치 수열의 항 개수를 입력하세요: ");
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}
```

## 9-2
1.
```c
#include <stdio.h>


int AddToToal (int num)
{
    static int total = 0;
    total += num;
    return total;
}

int main(void) {
    int num, i;

    for(i = 0; i<3; i++)
    {
        printf("입력%d: ",i+1);
        scanf("%d",&num);
        printf("누적: %d \n",AddToToal(num));
    }
    return 0;
}
```

## CH11

### 11-1
1.
```c
#include <stdio.h>

void sorting(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
    printf("입력된 정수 중 최대값 : %d\n", arr[0]);
    printf("입력된 정수 중 최솟값 : %d\n", arr[4]);
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("입력된 정수 총 합 : %d\n", sum);
}

int main(void)
{
    int arr[5];
    printf("숫자 5개를 입력해주세요 : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    sorting(arr, 5);
    return 0;
}
```

2.
```c
#include <stdio.h>

int main(void)
{
    char str[9] = {'G','o','o','d',' ','T','i','m','e'};

    for(int i = 0; i< 9; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
```

## 11-2
```c
#include <stdio.h>

int main(void)
{
    char str[50];
    int i = 0;
    scanf("%s",str);
    while(str[i] != '\0')
    {
        i++;
    }
    printf("영단의 총 길이 : %d",i);
    return 0;
}
```
2. 
```c
#include <stdio.h>

int main(void)
{
    char str [50];
    int i;
    scanf("%s",str);

    while (str[i] != '\0')
    {
        i++;
    }

    for(int j = i; j >= 0; j--)
    {
        printf("%c",str[j]);
    }
    
    return 0;
}
```

3.
```c
#include <stdio.h>

int main(void)
{
    char str [50];
    int i, temp;
    scanf("%s",str);

    while (str[i] != '\0')
    {
        i++;
    }

    for(int j = 0; j < i; j++)
    {
        int maxIndex = str[0];
        if(maxIndex < str[j+1])
        {
            maxIndex = str[j+1];
            temp = maxIndex;
        }
    }
    printf("%c",temp);
    return 0;
}
```