#include<stdio.h>



void printString(char arr[]);

int main()
{
    char name[] = {'J','Y','o','\0'};
    char name1[] = "JYO";

    char firstName[] = "Jyotishman";
    char lastName[] = "Goswami";
     
     // It will take the first character
     printf("%u\n", &firstName);
     printf("%u\n", &firstName[0]);
     printf("%u\n", &firstName[10]);


   printString(firstName);
   printString(lastName);


   // % string format specifier

   printf("%s\n",name1);

   // scanf add string;

//    printf("Add your name\n");
//    int myname[50];

//    scanf("%s",&myname);
//    printf("Your name is %s", &myname);


   // how to handle multiword string in c ex=> hello world++++++++     


    char str[100];

    gets(str);
    puts(str);


    return 0;
}


void printString(char arr[]){
      for(int i=0; i<arr[i] != '\0'; i++) {
         printf("%c",arr[i]);
      }
      printf("\n");
}