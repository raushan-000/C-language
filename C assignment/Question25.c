       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C Program to write even, odd and prime numbers to separate file

#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr1, *fptr2, *fptr3;
    int n, i, num;
    
    printf("Enter number of values : ");
    scanf("%d", &n);
    printf("\nEnter the values : ");
    fptr1 = fopen("numbers.txt", "w");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &num);
        putw(num, fptr1);
    }
    fclose(fptr1);
    fptr1 = fopen("numbers.txt", "r");
    fptr2 = fopen("odd.txt", "w");
    fptr3 = fopen("even.txt", "w");
    while((num = getw(fptr1)) != EOF)
    {
        if(num % 2 == 0){
            putw(num, fptr3) ;
        } else{
            putw(num, fptr2) ;
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    fptr2 = fopen("odd.txt", "r");
    fptr3 = fopen("even.txt", "r");
    printf("\nContents of ODD file is : ");
    while((num = getw(fptr2)) != EOF){
        printf("%d\t", num) ;
    }
    printf("\n\nContents of EVEN file is : ") ;
    while((num = getw(fptr3)) != EOF){
        printf("%d\t", num);
    }
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}
