#include <stdio.h>

int main() {
    int num, root;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {
        root = 0;
        while (num != 0) {
            root += num % 10;
            num /= 10;
        }
        num = root;
    }

    printf("Generic root: %d\n", num);
    return 0;
}
