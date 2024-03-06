#include<iostream>
using namespace std;
void printArray(int* A, int num){
    for(int i=0; i<num; i++){
        cout <<A[i]<<" ";
    }
        cout<<"\n"<<endl; 
}
void selectionSort(int* A, int num){
    int temp;
    int index;
    for(int i=0; i<num-1; i++){
       index = i;
       for(int j=i+1; j<num; j++){
        if(A[j] < A[index]){
            index = j;
        }
       }
       temp = A[i];
       A[i] = A[index];
       A[index] = temp;
    }
}
int main(){
    int arr[] = {4, 2, 6, 7, 2, 9};
    int n = 6;

    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}