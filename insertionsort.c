#include <stdio.h>
void printArray( int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d" , arr[i]);
    }
    printf("\n");
}

void insertionSort( int arr[] , int size){
    for( int i = 1 ; i < size ; i ++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev>=0 && arr[prev]> curr){
            arr[prev+1] = arr[prev];
            prev -- ;
        }
        arr[prev+1] = curr;
    }
}

 int main(){
    int arr[] = { 3, 5 , 2 , 4 , 1};
    int size = 5;
    printArray(arr , size);
    insertionSort( arr , size);
    printArray(arr , size);
 }