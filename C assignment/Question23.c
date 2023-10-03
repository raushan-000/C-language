       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C Program to create a file and write data into file

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    /* Variable to store user content */
    char data[DATA_SIZE];

    /* File pointer to hold reference to our file */
    FILE * fPtr;


    /* 
     * Open file in w (write) mode. 
     * "data/file1.txt" is complete path to create file
     */
    fPtr = fopen("data/file1.txt", "w");


  

    /* Input contents from user to store in file */
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);


    /* Write data to file */
    fputs(data, fPtr);


    /* Close file to save file data */
    fclose(fPtr);


    /* Success message */
    printf("File created and saved successfully.  \n");
     return 0;
}
