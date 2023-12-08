#include<stdio.h>

int main(){

    // Input
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("the numbre is %d \n", num);

    // Adding two number program   

    int num1;
    int num2;
    printf("Enter a:");
    scanf("%d",&num1);
    printf("Enter b:");
    scanf("%d",&num2);

    int sum = num1 + num2;

    printf("The sum is %d", sum);

    return 0;
}