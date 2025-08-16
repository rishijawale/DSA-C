#include <stdio.h>
void printArray( int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d" , arr[i]);
    }
    printf("\n");
}


void selectionSort( int arr[] , int size){
    int min , temp;
    for(int i = 0 ; i< size - 1; i++){
        min = i;
        for ( int j=i + 1 ; j< size; j++){
            if (arr[j]< arr[min]){
                min = j;
            }

        }
        temp = arr[i]; 
        arr[i] = arr[min];
        arr[min]= temp;
    }
}

int main(){

    int arr[] = { 20 , 12 , 3 , 11 , 6 };
    int size = 5;
    printArray( arr  , size);
    selectionSort( arr , size);
    printArray( arr , size);
}