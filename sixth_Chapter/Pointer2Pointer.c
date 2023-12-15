#include<stdio.h>

// Pointer to Pointer
int main()
{
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    int i = 6;
    int *pointer = &i;
    int **pointer2pointer = &pointer;

    printf("%d\n", **pointer2pointer);


    return 0;
}