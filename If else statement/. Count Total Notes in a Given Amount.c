#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter amount: ");
    scanf("%d", &amount);

    notes = amount / 100;
    amount %= 100;
    notes += amount / 50;
    amount %= 50;
    notes += amount / 20;
    amount %= 20;
    notes += amount / 10;
    amount %= 10;
    notes += amount / 5;
    amount %= 5;
    notes += amount / 1;

    printf("Total notes: %d\n", notes);

    return 0;
}
