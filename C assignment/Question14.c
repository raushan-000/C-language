       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

// C program to copy array elements to another array

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int source[MAX_SIZE], dest[MAX_SIZE];   /*dest is another array in which element of
                                                   source array is copied */
    int i, size;
	
/* Input size of the array */
printf("Enter the size of the array : ");
scanf("%d", &size);
    
 /* Input array elements */
printf("Enter elements of source array : ");
for(i=0; i<size; i++)
     {
        scanf("%d", &source[i]);
     }
	
 // Copy all elements from source array to dest array

     for(i=0; i<size; i++)
        {
            dest[i] = source[i];
        }


	     //Print all elements of source array
	     	    printf("\nElements of source array are : ");
	           for(i=0; i<size; i++)
	          {       
                   printf("%d\t", source[i]);
	           }
	
    
     // Print all elements of dest array
	     
	    printf("\n\nElements of dest array are : ");
	    for(i=0; i<size; i++)
	    {
	        printf("%d\t", dest[i]);
	    }

    return 0;
	}
