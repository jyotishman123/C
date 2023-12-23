#include<stdio.h>

int countOdd(int arr[], int n);
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    
    // Pointer

    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+5));



    int oddNum = countOdd(arr,8);
    printf("%d",oddNum);
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] % 2 != 0){
            count = count + 1;
        }
    }
    return count;
}