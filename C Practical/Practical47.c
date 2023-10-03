#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=0, num2=0;
    if(num1 && ++num2)
    printf("%d %d",num1++,num2);
    printf("\n%d %d",num1,num2);
    return 0;
}