#include<stdio.h>
#include<stdlib.h>

struct Product {
    int productID;
    char productName[10];
}  *p1, p2;    


int main()
{
    struct Product *p3, p4;
    printf("\nsizeof (p1) = %d",sizeof (p1));
    printf("\nsizeof (p2) = %d",sizeof (p2));
    printf("\nsizeof (p3) = %d",sizeof (p3));
    printf("\nsizeof (p4) = %d",sizeof (p4));
return 0;
}