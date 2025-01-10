#include<stdio.h>

void bubbleSort(int A[], int n){
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j]= A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

//Function to print an array
void printArray(int A[], int n){
    for(int i =0; i<n; ++i){
        printf("%d ", A[i]);
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