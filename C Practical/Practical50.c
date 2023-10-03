#include <stdio.h>
#include <stdlib.h>


    int calculate(int num)
      { return num*num;
      }
    int main()
{
   
    int data=1,result;
    result=calculate(++data) + calculate(data++) + calculate(data++);
   // result = calculate(++data) + calculate(data++);
    printf("%d",result);
    
    return 0;
}
