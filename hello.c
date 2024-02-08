#include <stdio.h>

int main(void)
{
    //복합 대입 연산자~
    
    int num1=3;         
    int num2=5;         
    int num3=8;
    int num4=10;

    num1 += 3;          // num1 = num1 + 3;
    num2 -= 2;          // num2 = num2 - 2;
    num3 *= 4;          // num3 = num3 * 4;
    num4 %= 5;          // num4 = num4 % 5;

    printf("Result: %d, %d, %d, %d \n",num1, num2, num3, num4);

    return 0;
}