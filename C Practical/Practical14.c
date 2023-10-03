#include<stdio.h>
#include<stdlib.h>
int main ()
{
int temp;
printf("enter room temperature");
scanf("%d",&temp);

if(temp > 25)
{
    printf("its summer");    
}
else
{
 printf("its winter");
}
return 0;
}