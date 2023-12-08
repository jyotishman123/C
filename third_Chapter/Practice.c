#include<stdio.h>

int main()
{
    int marks;
    printf("Enter number(0-100):\n");
    scanf("%d", &marks);
     
     if(marks <= 30){
        printf("fail\n");
     } else if(marks > 30 && marks<= 100){
        printf("Pass\n");
     } else{
        printf("Wrong-marks");
     }

    return 0;
}