//Progam to reverse string

#include<stdio.h>
#include<string.h>
 
int main() 
{
    char str[100];
    printf("Enter a string \n");
    gets(str);
    strrev(str);
    printf("Reverse of the string is %s\n", str);
    return 0;
}