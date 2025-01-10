#include<stdio.h>
void selectionSort(int arr[], int n){
    int i, j, temp, x;
    for(i=0; i<n-1; i++){
        x =i;
        for(j=i+1;j<n; j++){
            if(arr[j]<arr[x]){
                x=j;
            }
        }
        temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
    }

}
void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr,n);

    selectionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr,n);

    return 0;
}