#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int greatest = (a > b) ? a : b;
    printf("Greatest number: %d\n", greatest);

    return 0;
}
