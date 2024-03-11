#include<stdio.h>
/*void insertion(int arr[], int n){
    int key, j;
    for(int i=1; i<n; i++){

        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > key){

            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void bubble(int arr[], int n){
    int temp;
    int swapped = 0;
    for(int i=0; i<n-1; i++){
        swapped = 1;

        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 0;
            }
        }
        if(swapped == 1){
            break;
        }
    }
}*/
/*int binary(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size -1;
    mid = (low + high)/2;

    while(low <= high){
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}*/

int linear(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }return -1;
}
int main(){
    int size, element;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find : ");
    scanf("%d", &element);
    
    int search = linear(arr, size, element);

    if(search == -1){

        printf("element not found");
    }else{

        printf("element is found at index : %d", search);
    }
    return 0;
}
