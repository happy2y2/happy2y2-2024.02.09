#include <stdio.h>

int main(void)
{
    int num1=11;
    int num2=13;
    int num3=15;
    int num4=(num3++) + 1;     //16
    int num5=(--num4) - 1;     //15
    
    int result1, result2, result3, result4, result5, result6, result7, result8;

    //관계연산자(<,>,==,!=,<=,>=)

    result1=(num1 > num2);     // num1은 num2보다 큰가?  
    result2=(num1 < num2);     // num1은 num2보다 작은가?  
    result3=(num1 == num2);    // num1은 num2와 같은가?  
    result4=(num1 != num2);    // num1은 num2와 다른가?   

    printf("result1: %d \n", result1);   //0
    printf("result2: %d \n", result2);   //1
    printf("result3: %d \n", result3);   //0 
    printf("result4: %d \n", result4);   //1
    
    //증감 연산자(전위증가, 후위증가, 전위감소, 후위감소)

    printf("num1: %d \n", num1);         //11
    printf("num1++: %d \n", num1++);     //11
    printf("num1: %d \n", num1);         //12

    printf("num2: %d \n", num2);         //13
    printf("++num2: %d \n", ++num2);     //14
    printf("num2: %d \n", num2);         //14

    printf("num3: %d \n", num3);         //16
    printf("num4: %d \n", num4);         //16
    printf("num5: %d \n", num5);         //14

    //논리 연산자(&&, ||, !)

    result5 =(num1<num2 && num2>num1);  
    result6 =(num1>num2 || num2>num1);  
    result7 =(!num1);                   

    printf("result5: %d \n", result5);   //1
    printf("result6: %d \n", result6);   //1
    printf("result7: %d \n", result7);   //0 (C언에서는 0이아닌 모든값을 참(1)으로 출력한다)

    /* 콤마연산자 (,)
    - 둘 이상의 변수를 동시에 선언하거나
    - ex) int num1=11, num2=13; 
    - 둘 이상의 문장을 한 행에 삽입하는 경우 
    - ex) printf("hello"), printf("world!"); 에 사용
    - 인자의 구분에 사용 
    - 연산결과가 아닌 구분의 목적으로 사용
    */


   //결합방향 = 우선순위가 동일한 두 연산자가 하나의 수식에 존재하는 경우, 어떠한 순서대로 연산하느냐를 결정해 놓은 것

    return 0;

}