#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter lengths of three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is invalid.\n");
    }

    return 0;
}
