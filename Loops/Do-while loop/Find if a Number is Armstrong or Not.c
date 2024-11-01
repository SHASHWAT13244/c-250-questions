#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    do {
        originalNum /= 10;
        n++;
    } while (originalNum != 0);

    originalNum = num;
    do {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    } while (originalNum != 0);

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
