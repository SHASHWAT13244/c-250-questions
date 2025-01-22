#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], sum = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
            if (i + j == SIZE - 1) sum += A[i][j];
        }
    printf("Sum of minor diagonal: %d\n", sum);
    return 0;
}
