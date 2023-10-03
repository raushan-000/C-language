#include<stdio.h>
#include<stdlib.h>
int main()

{
    int m;
    printf("Enter number:- ");
    scanf("%d",&m);
    printf("%d\t",++m);
    printf("%d\t",++m);
    printf("%d\t",m++);
    printf("%d\t",m);
    return 0;
}