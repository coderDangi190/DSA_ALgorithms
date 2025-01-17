#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partion(int arr[] , int x, int y){
    int pivot = arr[y];
    int i = (x-1);

    for(int j = x; j<y; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[y]);
    return (i+1);
}

void quickSort(int arr[], int x , int y){
    if(x<y){
        int z = partion(arr, x, y);

        quickSort(arr, x, z-1);
        quickSort(arr, z+1, y);
    }
}


void printArray(int arr[], int size){
    for(int i=0; i < size; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n ");
    printArray(arr, n);

    return 0;
}