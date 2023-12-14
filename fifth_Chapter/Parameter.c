#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
   printf("Enter the first Number\n");
   scanf("%d",&a);
   printf("Enter the Second Number\n");
   scanf("%d",&b);

   int s = sum(a,b);
   printf("This is the sum function %d",s);

   return 0;

}

int sum(int a, int b){
    return a + b;
}