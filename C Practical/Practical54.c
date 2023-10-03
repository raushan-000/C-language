#include<stdio.h>
#include<stdlib.h>

int show(int num)
{
    int m,n=0;
    while(num)
    {
        m=num%10;
        if(m%2)
        n=n+1;
        num=num/10;
    }
    return (n);
}
int main()
{
int a=show(357);
int b=show(468);
printf("a = %d\n",a);
printf("b = %d\n",b);
return 0;
}

