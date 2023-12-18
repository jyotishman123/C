#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
     
     
    ptr--;
    printf("%u\n",ptr);

    // Float

    float a = 100.0;
    float *pt = &a;
    printf("%u\n",pt);
    pt++;
    printf("%u\n",pt);
    pt--;
    printf("%u\n",pt);

    // Comparing 

    int num = 22;
    int _num = 23;
    int *pointer = &num;
    int *_pointer = &_num;

    printf("%u,%u\n",pointer, _pointer);
    printf("difference = %u\n", pointer-_pointer);
    _pointer = &num;
    printf("comparision = %u\n", pointer == _pointer);



    return 0;
}