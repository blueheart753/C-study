# 02~ 06 문제
## CH 02

### 2-1.
1.
```C
#include <stdio.h>

int main(void) {
	printf("홍길동\n홍 길 동\n홍  길  동");
	return 0;
}
```

2.
```C
#include <stdio.h>

int main(void) {
	printf("홍길동\n");
	printf("한국\n");
	printf("0100-0000-0000");
	return 0;
}
```
### 2-2.
1.
```c
#include <stdio.h>

int main(void) {
	printf("제 이름은 홍길동 입니다.\n");
	printf("제 나이는 %d이고요.\n",20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.",123,456);
	return 0;
}
```
2.
```C
#include <stdio.h>

int main(void) {
	printf("%d * %d = %d\n",4,5,4*5);
	printf("%d * %d = %d\n",7,9,7*9);
	return 0;
}
```

## CH 3

### 3-1
1.
```C
#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("\n뺄셈의 결과 : %d", num1 - num2);
	printf("\n나눗셈의 결과 : %d", num1 / num2);

	return 0;
}
```

2.
```c
#include <stdio.h>

int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("\n%d * %d + %d = %d", num1, num2, num3, num1 * num2 + num3);

	return 0;
}
```

3.
```c
#include <stdio.h>

int main() {
	int num1;
	scanf("%d", &num1);

	printf("\n%d의 제곱 = %d",num1, num1 * num1);

	return 0;
}
```

4.
```c
#include <stdio.h>

int main() {
	int num1,num2;
	scanf("%d %d", &num1, &num2);

	printf("\n 두 수의 나눗셈 \n몫 = %d \n나머지 = %d",num1/num2, num1 % num2);

	return 0;
}
```
5.
```c
#include <stdio.h>

int main() {
	int num1,num2,num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("\n 계산 값 = %d",(num1-num2)*(num2+num3)*(num3%num1));

	return 0;
}
```

## CH 05
### 5-1.
1.
```c
#include <stdio.h>

int main() {
	int num1,num2,num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("\n 계산 값 = %d",(num1-num2)*(num2+num3)*(num3%num1));

	return 0;
}
```
2.
```c
#include <stdio.h>

int main(void) {

	double a,b;

	scanf_s("%lf %lf", &a, &b);

	printf("두 수의 덧셈 = %lf\n",a+b);
	printf("두 수의 뺄셈 = %lf\n", a - b);
	printf("두 수의 곱셈 = %lf\n", a * b);
	printf("두 수의 나눗셈 = %lf\n", a / b);
	
    return 0;
}
```

3.
3-1. 0 ~ 127

3-2. 숫자 1씩 증가

3-3. 32차이

4.
```c
#include <stdio.h>

int main(void) {

	int x;

	scanf("%d", &x);
	printf("%c",x);
	
    return 0;
}
```

```c
#include <stdio.h>

int main(void) {

	char x;
	scanf("%c", &x);
	printf("%d",x);
	
    return 0;
}
```