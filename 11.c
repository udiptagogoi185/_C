#include<stdio.h>

void printArray(int* A, int num){

    for(int i=0; i<num; i++){
        
        printf("%d ", A[i]);
    }
    printf("\n");
}
void inSort(int* A, int num){
    int j;
    int temp;

    for(int i=1; i<=num-1; i++){
        j = i-1;
        temp = A[i];
        while(j>=0 && temp<A[j]){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}
int main(){

    int arr[] = {6, 4, 8, 3, 1, 9};
    int n = 6;

    printArray(arr, n);
    inSort(arr, n);
    printArray(arr, n);

    return 0;
}