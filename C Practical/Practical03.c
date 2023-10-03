#include<stdio.h>
int main ()
{
    int marks ;
    printf("Enter the marks:");
    scanf("%d",&marks);
    int b =(marks>80)? 1 : ((marks>60) ? 2:3);
    printf ("Division =%d", b);
    return 0;
}