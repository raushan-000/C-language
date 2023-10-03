#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s=-1,t=-1,u=0,v=2,result;
    result= s++ && t++ && u++ || v++;
    //result= ++s && ++t && ++u || ++v;
    printf("%d %d %d %d %d",s,t,u,v,result);
    return 0;
}
