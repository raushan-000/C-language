#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[80];
    
    fp = fopen("IITK.txt", "w");
    if (fp == NULL) 
    {   puts("Cannot open file");
        exit(1);
    }
    
    printf("\nEnter a few lines of text:\n");
    
    while(  strlen(gets(s)) > 0 ) 
    {   fputs(s, fp);
        fputs("\n", fp);
    }
        fclose(fp);
puts("All data saved in IITK.txt file successfully.");
return 0;
}