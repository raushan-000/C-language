

#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int num,sum=0;char choice;
    while(1)
    {
      printf("enter number");
      scanf("%d",&num);
      sum =sum+num;
      printf("wish to enter more?[y/n]");
      fflush(stdin);
      scanf("%c",&choice);
      if (choice=='y')  {continue;}
      else
      { break;}
    }
    printf("Result =%d",sum);
    
}