#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed Number: %d\n", reversed);
    return 0;
}
