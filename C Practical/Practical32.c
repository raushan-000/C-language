#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  a;
    int *b;
    char  c;
    char *d;
    double e;
    double *f;
    float  g;
    float  *h;


    printf   ("\nsize of int a = %d", sizeof(a));
    printf     ("\nsize of int *b = %d", sizeof(b));

    printf("\nsize of char c = %d", sizeof(c));
    printf("\nsize of char *d = %d", sizeof(d));

    printf("\nsize of double e = %d", sizeof(e));
    printf("\nsize of double *f = %d", sizeof(f));
    printf("\nsize of float g = %d", sizeof(g));
    printf("\nsize of foat *h = %d", sizeof(h));
    return 0;
}