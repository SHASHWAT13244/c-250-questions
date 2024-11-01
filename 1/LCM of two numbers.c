#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Prompt the user for input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the LCM
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
