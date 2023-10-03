/* C program to read a time in millisecond and convert
 it into hour , minute and second  
               1000 millisecond =1 second */
#include<stdio.h>
   int main()
{
   long int milli_sec;
   int sec, h, m, s;
   printf("Input millisecond : ");
   scanf("%ld",&milli_sec);

   sec= (milli_sec /1000);
   h=(sec/3600);
   m=(sec-(3600*h))/60;
   s=(sec-(3600*h)-(m*60));
   printf("Hour =%d\n",h);
   printf("Minutes =%d\n",m);
   printf("Seconds =%d\n",s);
   return 0;
} 