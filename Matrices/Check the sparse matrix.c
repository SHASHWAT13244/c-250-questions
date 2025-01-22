#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], count = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] == 0) count++;
        }
    if (count > (SIZE * SIZE) / 2) printf("Sparse matrix\n");
    else printf("Not a sparse matrix\n");
    return 0;
}
