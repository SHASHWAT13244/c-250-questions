#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], sum = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j <= i; j++) sum += A[i][j];
    printf("Sum of lower triangular matrix: %d\n", sum);
    return 0;
}
