#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num1 , num2, res;
    int choice ;
    Patna :
    
    printf("Enter first number : ");
    scanf("%d", &num1);  
    printf("Enter second number : ");
    scanf("%d", &num2);

    res = num1 + num2;
    printf("\nAdditional result =%d",res);

    printf("\nDo you want to calculate again?\n Press 0-no/1-yes");  
    scanf("%d",&choice);

    if(choice == 1)
    {
        goto Patna;
    }

    printf("Program completed till end");
    return 0;
}