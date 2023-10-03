       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to check whether a number is even or odd

#include<stdio.h>
int main()
{
    int num;
    /* Input number from user */
    printf("Enter a number:-");
    scanf("%d",&num);
    if(num % 2 == 0) 
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
