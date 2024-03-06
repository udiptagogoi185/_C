#include<iostream>
using namespace std;

void printArray(int* A, int num){

    for(int i=0; i<num; i++){
        
        cout << A[i] << " ";
    }
    cout << endl;
}
void swap(int* a, int* b){
    int x;

    x = *a;
    *a = *b;
    *b = x;
}
void selSort(int* A, int num){

    int index;

    for(int i=0; i<num-1; i++){

        index = i;

        for(int j=i+1; j<=num-1; j++){

            if(A[j] < A[index]){

                index = j;

            }
        }
        swap(&A[i], &A[index]);
    }
}
int main(){

    int arr[] = {6, 4, 8, 3, 1, 9};
    int n = 6;

    printArray(arr, n);
    selSort(arr, n);
    printArray(arr, n);

    return 0;
}