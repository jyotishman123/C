#include<stdio.h>


void printHellow();
void printhowareyou();
void userInput();
void audi();
void bmw();


int main()
{

    printHellow();
    printHellow();
    printHellow();
    printhowareyou();
    userInput();
    return 0;
}

 
void printHellow(){
    printf("Hellow world\n");
}

void printhowareyou(){
    printf("How are you\n");
}

void userInput(){
    char userData;
    printf("If audi then type A else B\n");
    scanf("%c",&userData);
    
    if(userData == 'A' || 'a'){
         audi();
    } else {
         bmw();
    }
}

void audi(){
        printf("You Select Audi");    
}

void bmw(){
        printf("You Select BMW");    
}