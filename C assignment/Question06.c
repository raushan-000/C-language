       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to check whether a number is divisible by 5 and 11 or not.

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d",&num);
    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }

    return 0;
}
