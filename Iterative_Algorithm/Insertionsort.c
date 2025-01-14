#include<stdio.h>

void insertionSort( int arr[], int n){
    for(int i =1; i< n; i++ ){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
    arr[j+1] = temp ;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12,4,33,6,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:-\n");
    printArray(arr,n);

    insertionSort(arr,n);

    printf("Sorted Array:-\n");
    printArray(arr,n);

    return 0;
}