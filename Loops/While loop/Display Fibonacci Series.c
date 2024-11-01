#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2);

    while (i <= n - 2) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    printf("\n");
    return 0;
}
