#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
    char str1[20],str2[20];
    //str1 = "SCES"
    strcpy(str1,"SCES");
    strcpy(str2,"INDIA");
   // strcat(str1,str2);
    printf("\n%s",str1);
    printf("\n%s",str2);
    printf("\nLength = %d", strlen(str1));
    printf("\nLength = %d", strlen(str2));
    if (!strcmp(str1,str2))

    {
        printf("\n Both strings are same");
    }
    else
    {
        printf("\n Botn strings are different");
    }
    return 0;
}