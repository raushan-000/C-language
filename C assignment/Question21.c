       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to print day of week name using switch case

#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int num;
    printf("enter any number");
    scanf("%d", &num);
    switch (num)
    {
        case 1  :  printf ("Monday")    ; break ;
        case 2  :  printf ("Tuesday")   ; break ;
        case 3  :  printf ("Wednesday") ; break ;
        case 4  :  printf ("Thursday")  ; break ;
        case 5  :  printf ("Friday")    ; break ;
        case 6  :  printf ("Saturday")  ; break ;   
        case 7  :  printf ("Sunday")    ; break ; 
        default :  printf ("wrong input") ;  
        
        return 0 ;
    }
}