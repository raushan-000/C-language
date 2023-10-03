//example of array
//To find average of marks obtained by 5 students

#include<stdio.h>
int main()
{
    int i,sum=0,marks[5];
    float avg;
    printf("Enter the marks of five student");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=(float)sum/5;
    printf("%.3f",avg);
}