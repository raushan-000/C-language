#include <stdio.h>
#include <stdlib.h>
int main()
{
int num =1;
//while()
while(1)
{
    printf("\nnum = %d",++num);
    if(num>5)
    break;
}
return 0;
}