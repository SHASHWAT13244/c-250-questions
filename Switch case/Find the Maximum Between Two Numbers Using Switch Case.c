#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (num1 > num2) {
        case 1:
            printf("Maximum: %d\n", num1);
            break;
        case 0:
            printf("Maximum: %d\n", num2);
            break;
    }

    return 0;
}
