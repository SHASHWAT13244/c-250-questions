#include <stdio.h>

int main() {
    int num, root;
    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        root = 0;
        int temp = num; // Temporary variable to hold the original number
        do {
            root += temp % 10;
            temp /= 10;
        } while (temp != 0);
        num = root; // Update num to the root
    } while (num >= 10);

    printf("Generic root: %d\n", num);
    return 0;
}
