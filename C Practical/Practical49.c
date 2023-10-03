#include <stdio.h>
#include <stdlib.h>
int main()
{   int arr[5],a=-1;
    while(a<5)
    arr[a]=++a;
    for(a=0;a<5;a++)
    printf(" %d",arr[a]);
  return 0;
}    