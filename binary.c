#include <stdio.h>

int binarySearch(int arr[] , int size , int element ){
    int low , mid , high;
    low = 0;
    high = size-1;
    
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]>=element){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}



int main(){

    int arr[] = { 23, 56 , 63 ,99, 123 , 889 , 19999 ,7000000};
    int element = 63;
    int size = sizeof(arr)/sizeof(int);
    int searchIndex = binarySearch(arr , size , element);
    printf("The element %d was found at index %d" , element , searchIndex);

    return 0;
}