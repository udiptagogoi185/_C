#include<stdio.h>
void printArray(int* A, int n){

    for(int i=0; i<n; i++){

    printf("%d ", A[i]);

    }
}
void bubble(int* a, int nn){
    int temp;

    for(int i=0; i < nn-1; i++){

        for(int j=0; j < nn-1-i; j++){

            if(a[j] > a[j+1]){

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {3, 4, 1, 9, 5, 4};
    int num = 6;

    printArray(arr, num);
    bubble(arr, num);
    printf("\n");
    printArray(arr, num);

    return 0;
}