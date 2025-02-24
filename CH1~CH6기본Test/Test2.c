//문제 2: 문자 변환 프로그램
// 사용자로부터 소문자 알파벳을 입력받아 대문자로 변환한 후 출력하는 프로그램을 작성하세요.

// 힌트: toupper() 함수 또는 아스키 코드 활용
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[128];
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0') {
        printf("%c",toupper(str[i]));
        i++;
    }
    return 0;
}