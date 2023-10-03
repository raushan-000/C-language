       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C Program to get memory address using address of operator with pointer

#include <stdio.h>

int main()
{
    /* Simple declarations */
    char character = 'C';
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 989898989ll;

    /* Print variable value with their memory address */
    printf("Value of character = %c, Address of character = %u\n", character, &character);
    printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);
    printf("Value of real = %f, Address of real = %u\n", real, &real);
    printf("Value of biginteger = %lld, Address of biginteger = %u", biginteger, &biginteger);

    


  int a;
  int *pt;

  printf("Pointer Example Program : Print Pointer Address\n");
  a = 10;
  pt = &a;

  printf("\n[a  ]:Value of A = %d", a);
  printf("\n[*pt]:Value of A = %d", *pt);
  printf("\n[&a ]:Address of A = %p", &a);
  printf("\n[pt ]:Address of A = %p", pt);
  printf("\n[&pt]:Address of pt = %p", &pt);
  printf("\n[pt ]:Value of pt = %p", pt);
  
  return 0;
}