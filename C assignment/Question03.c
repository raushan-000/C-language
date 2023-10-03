       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1


// C Program to convert temperature from Celcius to Farenheit

#include<stdio.h>
#include<stdlib.h>
int main()
{
     float celsius, fahrenheit;

    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("temperature in fahrenheit =%f",fahrenheit);

    return 0;
}







