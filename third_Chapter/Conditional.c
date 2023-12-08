#include<stdio.h>

int main()
{
    int age;
    printf("enter age:\n");
    scanf("%d",&age);

    if(age > 18) {
        printf("Balik\n");
    }
    else{
        printf("Nabalik\n");
    }
    printf("thanks"); 
    return 0;
}