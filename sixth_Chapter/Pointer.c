#include<stdio.h>

int main()
{

    // * value of address
    // & address of operator

     int age = 18;
     int *pointer = &age;
     int _age = *pointer;

     printf("%d\n",_age);
     printf("%p\n", &age);
     printf("%p\n", &pointer);
     printf("The pointer value is %p\n", pointer);
     printf("The pointer value is %d\n", *pointer);


    return 0;  
}