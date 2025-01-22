#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], equal = 1;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
            scanf("%d", &B[i][j]);
            if (A[i][j] != B[i][j]) equal = 0;
        }
    if (equal) printf("Matrices are equal\n");
    else printf("Matrices are not equal\n");
    return 0;
}
