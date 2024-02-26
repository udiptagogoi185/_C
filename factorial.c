#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    }

    unsigned long long result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    printf("Factorial of %d = %llu\n", num, factorial(num));

    return 0;
}

