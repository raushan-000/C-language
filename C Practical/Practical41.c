#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch ='A' ;
    char*counter =&ch  ;
    printf("Delhi = %d \n",sizeof(*counter));
    printf("Patna = %d \n",sizeof(counter));
    return 0;
}