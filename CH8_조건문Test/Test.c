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