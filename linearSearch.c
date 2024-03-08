#include<stdio.h>
void insertion(int arr[], int n){
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
}
int linear(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }return -1;
}
int binary(int arr[], int size, int element){
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
}

int main(){
    int A[] = {5, 453, 67 ,24, 5678, 89, 0};
    // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(A)/sizeof(A[0]);
    insertion(A, size);
    int ele;
    printf("Enter the ele to find : ");
	scanf("%d", &ele);
	
	int search = binary(A, size, ele);
	if(search == -1){
		printf("not found");
	}else{
		printf("found at index : %d", search);
	
	}
    return 0;
}
