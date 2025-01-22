#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], sum[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
            scanf("%d", &B[i][j]);
            sum[i][j] = A[i][j] + B[i][j];
        }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
