# CH 8
### 8-1.
1.
```c
#include<stdio.h>
 
int main()
{
    for(int i=1;i<100;i++)
    {
        if(i%7==0 || i%9 ==0)
        printf("%d\t",i);
    }
    return 0;
}
```

2.
```c
#include<stdio.h>
 
int main()
{
    int a,b;
    int result = 0;
    
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    
    if( a >= b)
    {
        printf("%d - %d = %d",a,b,a-b);
    } 
    else
    {
        printf("%d - %d = %d",b,a,b-a);
    }

    return 0;
}
```

3.
```c
#include<stdio.h>
 
int main()
{
    int guk,eng,su;
    float avg;
    char creadit;
    
    printf("국어 영어 수학 점수를 차례대로 입력 : ");
    scanf("%d %d %d",&guk,&eng,&su);
    
    avg = (guk+eng+su)/3;
    printf("학점평균은 : %.1f\n",avg);
    
    if(avg >= 90)
    creadit = 'A';
    
    else if(avg >= 80)
    creadit = 'B';
    
    else if(avg >= 70)
    creadit = 'C';
    
    else if(avg >= 50)
    creadit = 'D';
    
    else
    creadit = 'F';

    printf("학점은 %c입니다.",creadit);
}
```

### 8-2.
1.
```c
#include<stdio.h>
 
int main()
{
    int gu=2, i = 1;
    
    for(int i=2;i<10;i++)
    {    printf("\n");
    
        if(i % 2 != 0)
        continue;
        
        for(gu=1;gu<10;gu++)
        {
            printf("%d x %d = %d\t",i,gu,i*gu);
            if(i == gu)
            break;
        }
    }
    return 0;
}
```

2.
```c
#include<stdio.h>
 
int main()
{
    int a,z;
    int result;
    for(a=0;a<10;a++)
    {
        for(z=0;z<10;z++)
        {
            if(a==z)
                continue;
                
            result = (a*10+z)+(z*10+a);
            if(result==99)
                printf("%d%d + %d%d = %d\n",a,z,z,a,result);
        }
    }
    return 0;
}
```
### 8-3
1.
```c
#include<stdio.h>
 
int main()
{
    int n;
    
    printf("정수를 입력해주세요 : ");
    scanf("%d",&n);
    
    switch(n/10)
    {
        case 0 :
            printf("0이상 10미만");
            break;           
            
        case 1 :
            printf("10이상 20미만");
            break;
            
        case 2 :
            printf("20이상 30미만");
            break;
            
        default :
            printf("30이상");
    }
}
```