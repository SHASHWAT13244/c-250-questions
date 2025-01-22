#include <stdio.h>
#define SIZE 3
int determinant(int A[SIZE][SIZE], int n) {
    if (n == 1) return A[0][0];
    int det = 0;
    for (int i = 0; i < n; i++) {
        int temp[SIZE][SIZE];
        for (int j = 1; j < n; j++)
            for (int k = 0; k < n; k++)
                if (k < i) temp[j-1][k] = A[j][k];
                else if (k > i) temp[j-1][k-1] = A[j][k];
        det += (i % 2 == 0 ? 1 : -1) * A[0][i] * determinant(temp, n-1);
    }
    return det;
}
int main() {
    int A[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) scanf("%d", &A[i][j]);
    printf("Determinant: %d\n", determinant(A, SIZE));
    return 0;
}
