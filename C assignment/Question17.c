       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C Program to find length of string using strlen() string function

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum size of string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    int length;

    printf("Enter any string: ");
    gets(text);

    /* Call strlen() function to count length of string */
    length = strlen(text);

    printf("Length of '%s' = %d", text, length);

    return 0;
}
