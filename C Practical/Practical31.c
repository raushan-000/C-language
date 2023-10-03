#include<stdio.h>
#include<stdlib.h>


    float rec(float x)
    {       float res;
    
        if (x ==1)
        {
            return(1);
        }
        else
        {
            res = x* rec(x-1);
        }
        return(res);
        
    }
float main()
{
    float i,fact;
    printf("\n enter value of i:-8");
    scanf("%f",&i);
    fact =rec(i);
    printf("\n factorial of a number =%f",fact);
    return 0;
}








