#include<stdio.h>
int fibonacci(int n){
    if(n<=1){
        return n;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);
    if(num<0){
        printf("Invalid integer !!");
    }else{
        printf("Fibonacci of %d is : %d", num, fibonacci(num));
    }
    return 0;
}