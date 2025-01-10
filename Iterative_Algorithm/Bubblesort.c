#include<stdio.h>

void bubbleSort(int array[], int n){
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]= array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

//Function to print an array
void printArray(int array[], int n){
    for(int i =0; i<n; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {63,61,33,21,66,23};
    int n = sizeof(data)/ sizeof(data[0]);

    printf("Unsorted Array:\n");
    printArray(data,n);

    bubbleSort(data, n);

    printf("Sorted Array:\n");
    printArray(data, n);

    return 0;
}