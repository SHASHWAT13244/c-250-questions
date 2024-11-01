#include <stdio.h>

int main() {
    int a, b, lcm, max;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    do {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    } while (1);

    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}
