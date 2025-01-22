#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], row_sum, col_sum;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++) {
        row_sum = 0; col_sum = 0;
        for (int j = 0; j < SIZE; j++) {
            row_sum += A[i][j];
            col_sum += A[j][i];
        }
        printf("Row %d sum: %d, Column %d sum: %d\n", i+1, row_sum, i+1, col_sum);
    }
    return 0;
}
