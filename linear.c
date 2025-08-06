
//Code for linear Search


#include<stdio.h>
int linearSearch(int arr[], int size , int element){
    for(int i = 0 ; i<size ; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;

}

int main(){

    int arr[]= {1 , 45 , 78 , 22, 2 ,5, 99 };
    int size = sizeof(arr)/sizeof(int);
    int element = 78;
    int searchIndex = linearSearch(arr ,size , element);
    printf("THe element %d was found at index %d\n", element , searchIndex);
    return 0;
}