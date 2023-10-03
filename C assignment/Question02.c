       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       
      // C Program for swapping two number
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num1;
  int num2;
  int c;
  printf("enter two number:-");
  scanf("%d%d",&num1,&num2);
  c=num1;
  num1=num2;
  num2=c;
  printf("after swapping, the number is=%d  %d",num1,num2);
  return 0;
}  




