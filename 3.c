#include <stdio.h>
int main(){

    int num1, num2, product, difference;
    char opperator;
    
    

        printf("Enter the first number : ");
        scanf("%d", &num1);

        printf("Enter the opperator : ");
        scanf("%s", &opperator);

        printf("Enter the second number : ");
        scanf("%d", &num2);
    
    product = num1*num2;
    difference = num1-num2;

    if(opperator == '*'){
        printf("The result is : %d", product);
    }else if(opperator == '-'){
        printf("The result is : %d", difference);
    }else{
        printf("Invalid opperator");
    }

            return 0;
}