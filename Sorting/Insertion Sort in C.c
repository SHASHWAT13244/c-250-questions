#include <stdio.h>
#define SIZE 5
int main() {
    int arr[SIZE], key, j;
    for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (int i = 1; i < SIZE; i++) {
        key = arr[i]; j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    return 0;
}
