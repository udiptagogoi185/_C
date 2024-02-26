#include <stdio.h>

int main(){

    int A = 1, B = 2, C = 3;

    if(A < B && A < C){
        printf("The smallest is : %d", A);
    }else if(B < A && B < C){
        printf("The smallest is : %d", B);
    }else{
        printf("The smallest is : %d", C);
    }

            return 0;
}