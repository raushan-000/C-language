#include<stdio.h>
#include<stdlib.h>
void show ()
{
  static int a =890;
  a++;
  printf("\n %d",a);
}
int main()
{
    show();
    show();
    show();
    return 0;
}