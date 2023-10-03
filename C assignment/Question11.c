       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to calculate factorial of a number


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, num;
    unsigned long long int fact=1;

    /* Input number from user */
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    /* Run loop from 1 to num */
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %llu", num, fact);

    return 0;
}