# CH 7
## 7-1.
1.
```c
#include <stdio.h>

int main(void) {
	int n, i = 0;
	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &n);
	while (i < n) {
		printf("Hello world!\n");
		i++;
	}
	return 0;
}
```
2.
```c
#include <stdio.h>

int main(void) {
	int n, i = 1;
	scanf("%d", &n);
	while (i <= n) {
		printf("%d ", i * 3);
		i++;
	}
	return 0;
}
```
3.
```c
#include <stdio.h>

int main(void) {
	int sum = 0;
	while (1) {
		int n;
		scanf("%d", &n);
		sum += n;
		if (n == 0)
			break;
	}
	printf("%d", sum);
	return 0;
}
```

4.
```c
#include <stdio.h>

int main(void) {
	int n, i = 9;
	scanf_s("%d", &n);
	while (i >= 1) {
		printf("%d * %d = %d\n", n, i, n * i);
		i--;
	}
	return 0;
}
```

5.
```c
#include <stdio.h>

int main(void) {
	int n;
	int i = 0;
	int num;
	double sum = 0, avg = 0;
	printf("몇 개의 정수를 입력하실건가요 : ");
	scanf("%d", &n);
	printf("%d개의 정수를 입력해주세요 : ", n);
	while (i < n) {
		scanf("%d", &num);
		i++;
		sum += num;
	}
	avg = (double)sum / n;
	printf("\n이 값들의 평균은 %f입니다.", avg);
	return 0;
}
```

### 7-2.
1.

```c
#include<stdio.h>
 
int main()
{    
    int i = 0;
    int a;
    int result = 0;
    while(i<5)
    {    
        printf("%d 번째 정수를 입력하세요 : ",i+1);
        scanf("%d",&a);
    
        if(a < 1)
        {
            printf("재입력하세요\n");
        }
        result += a;
        i++;
    }
    printf("총합은 %d 입니다.",result);
    return 0;
}
```

```c
#include<stdio.h>
 
int main()
{    
    int i = 0;
    int j = 0;
    while(i<5)
    {    
        while(j<i)
        {
            printf("0");
            j++;
        }
        printf("* \n");
        j = 0;
        i++; 
    }
}
```


### 7-3.
1.
```c
#include<stdio.h>
 
int main()
{
    int total = 0, num = 1;
    
    while(num!=0)
    {
        printf("정수입력 : ");
        scanf("%d",&num);
        
        total += num;
    }
    
    printf("합계 %d \n",total);
}
```

2.
```c
#include<stdio.h>
 
int main()
{
    int i=0;
    int result =0;
    do
    {
        result += i;
        i=i+2;
        
    }while(i<=100);
    
    printf("계산결과는 %d 입니다.",result);
}
```

3.
```c
#include<stdio.h>
 
int main()
{
    int cur = 2;
    int is = 0;
    do
    {
        is = 1;
        do
        {
            printf("%d x%d = %d\n",cur,is,cur*is);
            is++;
        }while(is<10);
        cur++;
    }while(cur<10);
}
```
### 7-3.
1.
```c
#include<stdio.h>
 
int main()
{
    int a,b;
    int result = 0;
    
    printf("정수 2개 입력:");
    scanf("%d %d",&a,&b);
    
    for(int i = a;i<=b;i++)
    {
        result +=i;
    }
    
    printf("total = %d",result);
}
```

2.
```c
#include<stdio.h>
 
int main()
{
    int n;
    int result = 1;
    
    printf("정수 입력:");
    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++)
    {
        result *=i ;
    }
    
    printf("total = %d",result);
}
```