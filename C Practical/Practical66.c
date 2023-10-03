#include <stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
    char another = 'Y';
    
    struct emp 
    {   char name[40];
        int age;
        float bs;
    };

    struct emp e;
    
    fp = fopen("EMP.DAT", "wb");   //write mode
    if (fp == NULL) 
    {   puts("Cannot open file");
        exit(1);
    }
    
    while (another == 'Y') 
    {
        printf("\nEnter name, age and basic salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        
        fwrite(&e, sizeof( e), 1, fp);
        
        printf("Add another record (Y/N) ");

        fflush(stdin);
        scanf(" %c", &another);
        //another = getche();
    }
    fclose(fp);
    return 0;
}    
