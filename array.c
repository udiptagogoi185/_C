#include<stdio.h>

int main(){
    int n;
        printf("enter array size : ");
        scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for(int i=0; i<n; i++){
        printf("Enter num %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    float avg = sum/2;

    printf("\n");
    printf("sum : %d\n", sum);
    printf("average : %f", avg);

    return 0;
}