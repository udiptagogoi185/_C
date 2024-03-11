#include<stdio.h>
int binary(int arr[], int low, int high, int element){

    if(low <= high){
        
    int mid = (low + high)/2;
        
        if(arr[mid] == element){

            return mid;
        }
        if(arr[mid] < element){

            return binary(arr, mid+1, high, element);
        }else{

            return binary(arr, low, mid-1, element);
        }
    }
    return -1;
}
int main(){
    int arr[] = {2, 4, 6, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = size -1;
    int element;

    printf("Enter the element to find : ");
    scanf("%d", &element);
    
    int search = binary(arr, low, high, element);

    if(search == -1){

        printf("element not found");
    }else{

        printf("element is found at index : %d", search);
    }
    return 0;
}