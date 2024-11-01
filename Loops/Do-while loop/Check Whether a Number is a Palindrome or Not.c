#include <stdio.h>

int main() {
    int num, reversed = 0, originalNum, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    do {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    } while (num != 0);

    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
