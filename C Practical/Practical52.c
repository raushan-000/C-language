#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[]={0,1,2,3,4};
    int num, *ptr;
    for(ptr=arr,num=0; ptr+num<=arr+4;  ptr++,num++)
    {
        printf("%d  ",*(ptr+num));
    }
      return 0;
}