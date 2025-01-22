#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], symmetric = 1;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (A[i][j] != A[j][i]) symmetric = 0;
    if (symmetric) printf("Matrix is symmetric\n");
    else printf("Matrix is not symmetric\n");
    return 0;
}
