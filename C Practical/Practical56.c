#include<stdio.h>
#include<stdlib.h>
union Customer{
int customerId;
float discount;
double totalbill;
//char name[9];
} *c1, c2;

int main(){

union Customer *c3, c4;
printf("sizeof(c1) = %d \n", sizeof (c1));
printf("sizeof(c2) = %d \n", sizeof (c2));
printf("sizeof(c3) = %d \n", sizeof (c3));
printf("sizeof(c4) = %d \n", sizeof (c4));
return 0;
}