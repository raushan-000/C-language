#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
    int count = 0;

    start:
    printf("aman  ");
    count++;
    if(count <10)
    {
        goto start;
    }
    return 0;
}