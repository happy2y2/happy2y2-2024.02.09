#include <stdio.h>

int main(void)
{
    //문제5: 입력받은 세 개의 정수 num1, num2, num3를 대상으로 다음을 연산하는 프로그램 작성
    //(num1-num2)x(num2+num3)x(num3%num1)
    int result1;
    int num1, num2, num3;

    printf("세 정수 입력:");
    scanf("%d %d %d", &num1, &num2, &num3);

    result1=(num1-num2)*(num2+num3)*(num3%num1);

    printf("%d\n", result1);

    return 0;

}