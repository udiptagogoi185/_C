#include<stdio.h>
void printA(int *A, int num){
    for(int i=0; i<num; i++){
        printf("%d ", A[i]);
    }
        printf("\n");
}
void inSort(int *A, int num){
    int box, j;
    for(int i=1; i<=num-1; i++){
        box = A[i];
        j = i-1;
        while(j>=0 && A[j] > box){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = box;
    }
}
int main(){
    int arr[] = {5, 2, 8, 9, 4, 2};
    int n = 6;
    printA(arr, n);
    inSort(arr, n);
    printA(arr, n);

    return 0;
}