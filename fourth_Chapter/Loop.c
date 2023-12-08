#include<stdio.h>

int main()
{

    int num = 0;
    for(int i = 1; i<=10; i+=1){
        printf("You loop runned %d\n", i);
        num+=i;
    }
    printf("the sum is %d\n",num);
    return 0;
}