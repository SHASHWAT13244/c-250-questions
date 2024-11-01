#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Using unsigned long long for large results

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial using iteration
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
