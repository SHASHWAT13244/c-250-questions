#include <stdio.h>

int main() {
    int num, sum1 = 0, sum2 = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int position = 1; // 1 for odd, 0 for even
    while (num != 0) {
        remainder = num % 10;
        if (position) {
            sum1 += remainder; // odd position
        } else {
            sum2 += remainder; // even position
        }
        num /= 10;
        position = !position; // toggle position
    }

    if ((sum1 - sum2) % 11 == 0) {
        printf("The number is divisible by 11.\n");
    } else {
        printf("The number is not divisible by 11.\n");
    }

    return 0;
}
