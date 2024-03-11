#include<stdio.h>
int binary(int arr[], int low, int high, int element){

    while(low <= high){
        
    int mid = (low + high)/2;
        
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
}
int main(){
    int size, element;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    int low = 0;
    int high = size -1;

    for(int i=0; i<size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
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