#include<stdio.h>

int main()
{

    // * value of address
    // & address of operator

     int age = 18;
     int *pointer = &age;
     int _age = *pointer;

     printf("%d",_age);

    return 0;  
}