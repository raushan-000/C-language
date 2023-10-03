      //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to enter a number and print its reverse

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,reverse=0;
    printf("Enter a number :-");
    scanf("%d",&num);
    while(num >0)
    {
        reverse = (reverse *10) + (num %10);
    
        num /=10;
    }
    printf("Reverse number=%d",reverse);
    return 0;
}
