#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5] ={55,1,66,22,33};
    int x,y,z;


    x=++arr[1];
    y=arr[1]++;
    z=arr[x++];

printf("\n x = %d",x);
printf("\n y = %d",y);
printf("\n z = %d",z);
return 0;
}