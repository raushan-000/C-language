#include <stdio.h>
#include<stdlib.h>
int main()
{

FILE *fp;
    char ch;
    int nol = 0, not = 0, nob = 0, noc = 0;    // nol-no. of line
    fp = fopen("Practical61.c", "r");          // nob-no. of blank space
                                               // not-no. of text
    while (1)                                  // noc-no.ofcharacter
    {   ch = fgetc(fp);
        if (ch == EOF) break;
        noc++;
        if (ch == ' ') 
        {nob++;
        }
        if (ch == '\n') 
        {nol++;
        }
        if (ch == '\t') 
        {not++;
        }
    }    //end of while
    fclose(fp);
    
    printf("\nNumber of characters = %d", noc);
    printf("\nNumber of blanks = %d", nob);
    printf("\nNumber of tabs = %d", not);
    printf("\nNumber of lines = %d", nol);
    return 0;
}