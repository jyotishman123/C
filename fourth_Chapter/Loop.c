#include<stdio.h>

int main()
{

    int num = 0;
    // for loop
    for(int i = 1; i<=10; i+=1){
        printf("You loop runned %d\n", i);
        num+=i;
    }
    printf("the sum is %d\n",num);

    for(char ch = 'a'; ch<'z'; ch++){
        printf("Your char are %c\n", ch);
    }

    // while loop

    int m = 1;

    while (m<=5)
    {
         printf("This is while loop %d\n", m);
         m++;
        
    }

    int userNumber;
    printf("Enter a number\n");
    scanf("%d",&userNumber);

    int w = 0;

    while (w<=userNumber)
    {
        printf("Your code is running %d\n",w);
        w++;
    }

    // do while loop

    int d = 1;

    do {
        printf("This is do while loop %d\n",d);
        d++;
    }   while (d<=5);
     
    
    

    return 0;
}