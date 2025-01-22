#include <stdio.h>
#define SIZE 5
int main() {
    int arr[SIZE], minIdx, temp;
    for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < SIZE-1; i++) {
        minIdx = i;
        for (int j = i+1; j < SIZE; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        if (minIdx != i) {
            temp = arr[i]; arr[i] = arr[minIdx]; arr[minIdx] = temp;
        }
    }
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    return 0;
}
