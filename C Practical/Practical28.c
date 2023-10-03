//  string
// T print character using string


#include<stdio.h>
void main()
{
    int i;
    char name[10];
    printf("Enter your name");
    fflush(stdin);
    scanf("%s",name);
    for(i=0;i<10;i++)
    {
        printf("%c",name[i]);
    }
    printf("\n Hello%s",name);

}