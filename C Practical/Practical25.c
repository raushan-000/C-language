/* To print "*" in triangle form */
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int row,col;
     for(row=2;row<=6;row++);
     {
         for(col=1;col<=row;col++);
         {
             printf("%d",row);
         }
         printf("\n");
     }
     return 0;
 }