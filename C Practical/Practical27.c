#include<stdio.h>
#include<stdlib.h>
int main()
{
    int stud[3][2] ={
                          {101,23},
                          {102,33},
                          {103,25}
                    } ;
    int marks []  [3] = {10,45,21,54,35,67};
    float price [2] [3] = {12.34,34.5,44.5,10.56,24,45,2.43};

   // printf("\nsizeof(stud) = %d", sizeof(stud));
    printf("\nsizeof(marks) = %d", sizeof(marks));
   // printf("sizeof(price) = %f", sizeof(price));
    return 0;
}    