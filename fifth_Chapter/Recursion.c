#include<stdio.h>

void recursionfync(int count);

int main(){
      
     recursionfync(6);
     return 0;
}


void recursionfync(int count){
    if(count == 0) {
        return;
    }
    printf("Hello World\n");
    recursionfync(count-1);
}