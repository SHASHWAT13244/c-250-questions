#include <stdio.h>
#define SIZE 5
void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2)
        for (int i = gap; i < n; i++) {
            int temp = arr[i], j;
            for (j = i; j >= gap && arr[j-gap] > temp; j -= gap)
                arr[j] = arr[j-gap];
            arr[j] = temp;
        }
}
int main() {
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    shellSort(arr, SIZE);
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    return 0;
}
