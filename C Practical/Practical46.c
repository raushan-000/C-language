#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("sizeof(char *)        = %d \n",sizeof(char *));
    printf("sizeof(int *)         = %d \n",sizeof(int *));
    printf("sizeof(double *)      = %d \n",sizeof(double *));
    printf("sizeof(float *)       = %d \n",sizeof(float *));
    printf("sizeof(struct data *) = %d \n",sizeof(struct data *));
    printf("sizeof(void *)        = %d \n",sizeof(void *));
    return 0;
}