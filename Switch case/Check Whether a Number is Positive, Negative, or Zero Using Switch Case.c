#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("%d is negative.\n", num);
                    break;
                case 0:
                    printf("The number is zero.\n");
                    break;
            }
            break;
    }

    return 0;
}
