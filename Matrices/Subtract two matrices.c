#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], diff[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
            scanf("%d", &B[i][j]);
            diff[i][j] = A[i][j] - B[i][j];
        }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}
