       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C Program to swap two numbers using pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num1;
  int num2;
  int c;
  int *ptr1, *ptr2;

    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2
 
  printf("enter two number:-");
  scanf("%d%d",ptr1,ptr2);
  c=*ptr1;
  *ptr1=*ptr2;
  *ptr2=c;
  printf("after swapping, the number is=%d  %d",*ptr1,*ptr2);
  return 0;
}  