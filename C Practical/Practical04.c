#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int roll =1234;
    
    printf("\n my roll no.=%d",roll);
    printf("\n size of int =%d",sizeof(int) );
    printf("\n size of long int =%d",sizeof(long int) );
    printf("\n size of short int =%d",sizeof(short int) );
    printf("\n size of long =%d",sizeof(long) );
    printf("\n size of short =%d",sizeof(short) );
    printf("\n size of float =%d",sizeof(float) );
    printf("\n size of double =%d",sizeof(double) );
    printf("\n size of int =%d",sizeof(int) );
    printf("\n size of long double =%d",sizeof(long double) );
    printf("\n size of char =%d",sizeof(char) );
    printf("\n size of unsigned char =%d",sizeof(unsigned char) );

int ch;
ch = 255;
printf("\n\n value of ch =%d",ch);
ch = ch+3;
printf("\n value of ch after increment =%d",ch);


   return 0;
}