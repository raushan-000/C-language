#include <stdio.h>
#include<stdlib.h>

void show1(char s[50])
{
    printf("Received string by show1 = %s",s);
}

void show2()
{}
int main()
{
    char arr1[50];    //ok
    printf("Enter your name : ");
    scanf("%s",arr1);

    show1(arr1);

    char arr2[] = "INDIA";
            //or
    char arr3[7] = {'I' ,'N', 'D', 'I', 'A','\0' };  //0,1,2,3,4
   
    printf("\nvalue of arr2 = %s", arr2);
    printf("\nvalue of arr3 = %s", arr3);
    arr3[2] = '\0';
    
    printf("\nvalue of arr3 = %s", arr3);
    printf("\nvalue of arr3 = %s", &arr3[3]);
    printf("\nvalue of arr3 = %s", &arr3[4]);
    
    return 0;
}