       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to check whether a year is leap year or not

#include<stdio.h>
int main()
{
    int year;
    // Input year from user
    printf("Enter year :-");
    scanf("%d",&year);
    if(((year % 4 ==0) && (year % 100 !=0)) || (year % 400 ==0))
     {
         printf("LEAP YEAR");
     }
     else
     {
         printf("COMMON YEAR");
     }
     return 0;
}