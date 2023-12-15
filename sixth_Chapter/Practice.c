#include<stdio.h>

int main()
{
    int x;

    int *ptr = &x;
    
    *ptr = 0;

    printf("the value of x is %d\n",x);
    printf("the value of *ptr is %d\n",*ptr);

    *ptr+=5;

    printf("the value of x after incr is %d\n",x);
    printf("the value of *ptr after incr is %d\n",*ptr);


    (*ptr)++;
    printf("the value of x after incr is %d\n",x);
    printf("the value of *ptr after incr is %d\n",*ptr);


    return 0;

}