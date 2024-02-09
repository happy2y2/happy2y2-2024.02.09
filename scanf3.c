#include <stdio.h>

int main(void)
{
    //문제3 하나의 정수를 입력받아서, 그 수의 제곱을 만들자

    int result1;
    int num1;

    printf("하나의 정수:");
    scanf("%d \n", &num1);

    result1=num1*num1;

    printf("%d \n", result1);

    return 0;
}