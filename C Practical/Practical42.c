#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1 = 120; 
    int num2 = 170;
    int num3 = 100;
    int result;
    result=(num1>num2 && num1>num3) ? num1 : ( (num2>num1 && num2> num3) ?num2:num3);
    printf("RESULT = %d",result);
    return 0;
}

