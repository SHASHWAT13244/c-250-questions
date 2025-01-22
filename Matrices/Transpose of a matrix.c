#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], transpose[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) transpose[i][j] = A[j][i];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
