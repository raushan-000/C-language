#include<stdio.h>
void show()
{
    printf("WELCOME TO RECURSIE FUNCTION ");
    show();
}
void main()
{
    printf("main()function started.");
   show();
   
}