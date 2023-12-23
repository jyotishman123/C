#include<stdio.h>

int main(){
    // array input using pointer

    int mycollection[6];
    int *ptr = &mycollection[0];
    
    for(int i=0; i<6; i++){
        printf("%d index number: ", i);
        scanf("%d",(ptr + i));
    }

    for(int i=0; i<6; i++){
        printf("%d index = %d\n", i, *(ptr+i));
    }

    // without using pointer

    //  for(int i=0; i<6; i++){
    //     printf("%d index number: ", i);
    //     scanf("%d", &mycollection[i]);
    // }

    // for(int i=0; i<6; i++){
    //     printf("%d index = %d\n", i,  mycollection[i]);
    // }

    return 0;
}