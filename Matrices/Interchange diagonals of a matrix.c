#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) scanf("%d", &A[i][j]);
    for (int i = 0; i < SIZE; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][SIZE - i - 1];
        A[i][SIZE - i - 1] = temp;
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}
