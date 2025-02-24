// 문제 6: 학점 계산기
// 사용자로부터 시험 점수(0~100)를 입력받아 학점을 출력하는 프로그램을 작성하세요.
// 90점 이상: A
// 80점 이상: B
// 70점 이상: C
// 60점 이상: D
// 60점 미만: F

#include <stdio.h>

int main(void)
{
    int score;
    char credit;
    printf("학점을 입력해주세요 : ");
    scanf("%d",&score);

    switch (score / 10)
    {
    case 9:
        credit = 'A';
        break;
    case 8:
        credit = 'B';
        break;
    case 7:
        credit = 'C';
        break;
    case 6:
        credit = 'D';
        break;
    default:
        credit = 'F';
        break;
    }
    printf("당신의 학점은 %c입니다.",credit);
}