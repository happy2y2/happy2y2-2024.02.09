#include <stdio.h>

int main(void)
{
    //문제2: num1xnum2+num3 만들기

    int result1
    int num1, num2, num3;

    printf("세개의 정수 입력:");
    scanf("%d %d %d\n", &num1, &num2, &num3);

    result1=num1*num2+num3;

    printf("%d * %d + %d = %d \n", num1, num2, num3, result1);
    return 0;

}