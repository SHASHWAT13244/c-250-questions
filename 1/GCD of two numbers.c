#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Prompt the user for input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the GCD
    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
