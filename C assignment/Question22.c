       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to check whether an alphabet is vowel or consonant using switch case

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char alpha;
    printf("Enter any alphabet : ");
    scanf("%c", &alpha);

    switch(alpha)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':   printf("\n Its an vowel");break;
       default :  printf("\nIts consonent"); 
    } //end of switch block
      return 0;
}