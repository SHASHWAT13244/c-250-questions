#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], mul[SIZE][SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            for (int k = 0; k < SIZE; k++)
                mul[i][j] += A[i][k] * B[k][j];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}
