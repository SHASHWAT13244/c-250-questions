#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter the first three octets of the IP address (e.g., 192 168 1): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Generated IP Addresses:\n");
    for (d = 0; d <= 255; d++) {
        printf("%d.%d.%d.%d\n", a, b, c, d);
    }

    return 0;
}
