#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter amount: ");
    scanf("%d", &amount);

    notes = amount / 100;
    amount %= 100;
    printf("Notes of 100: %d\n", notes);

    notes = amount / 50;
    amount %= 50;
    printf("Notes of 50: %d\n", notes);

    notes = amount / 20;
    amount %= 20;
    printf("Notes of 20: %d\n", notes);

    notes = amount / 10;
    amount %= 10;
    printf("Notes of 10: %d\n", notes);

    notes = amount / 5;
    amount %= 5;
    printf("Notes of 5: %d\n", notes);

    printf("Notes of 1: %d\n", amount); // Remaining amount is in 1s

    return 0;
}
