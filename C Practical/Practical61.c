#include <stdio.h>
#include<stdlib.h>
void calculate(int b[], int count)
{
    for(int i=0; i<count; i++)
    {
        printf("%d  ", b[i]);
    }
}
void calculateAvg(int b[], int count)
{
    printf("\nstudent report\n");
    for(int i=0; i<count; i++)
    {
        printf("\nstudent marks[%d] = %d", i, b[i]);
    }
}
int main()
{
    //int a[50] = {11,22,33,44,55};
    //calculate(a, 5);
    int marks[50];
    int no;
    printf("Enter the no of students participated in event :-");
    scanf("%d", &no);
    printf("\nEnter the marks of all those %d students. \n\n",no);
    for(int i=0; i<no; i++)
    {
        printf("\nEnter student marks[%d] : ",i);
        scanf("%d", &marks[i]);
    }
    calculateAvg(marks,no);
    return 0;
}