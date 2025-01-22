#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            A[i][j] = (i == j) ? 1 : 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}
