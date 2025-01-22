#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], scalar, result[SIZE][SIZE];
    scanf("%d", &scalar);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = scalar * A[i][j];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
