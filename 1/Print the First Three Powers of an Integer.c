#include <stdio.h>

int main() {
    int N;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &N);

    // Calculate and display the powers
    printf("%d^1 = %d\n", N, N);          // N^1
    printf("%d^2 = %d\n", N, N * N);      // N^2
    printf("%d^3 = %d\n", N, N * N * N);  // N^3

    return 0;
}
