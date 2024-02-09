#include <stdio.h>

int main(void)
{
    //문제4: 두 정수를 나누었을 때 몫과 나머지를 출력

    int result1, result2;
    int num1, num2;

    printf("두 정수 입력:");
    scanf("%d %d \n", &num1, &num2);

    result1=num1/num2;
    result2=num1%num2;

    printf("나머지: %d, 몫: %d \n", result1, result2);

    return 0;
}