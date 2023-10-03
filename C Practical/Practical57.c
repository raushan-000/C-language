#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Customer{
int customerId;

char name[21];
};



int main()
{
  struct Customer c;
  c.customerId = 1007;
  strcpy(c.name,"IITK");
  //printf("Customer Id = %d", c->customerId); //error
 // printf("Customer Name = %d", c->name);  //error 

  printf("Customer Id = %d\n", c.customerId);
  printf("Customer Name = %s\n\n", c.name);
   
   struct Customer *ptr = &c;
   ptr->customerId = 1008;
   strcpy(ptr->name,"India");
   printf("Customer Id  = %d \n", ptr->customerId);
   printf("customer name =%s \n", ptr->name);
  return 0;
}