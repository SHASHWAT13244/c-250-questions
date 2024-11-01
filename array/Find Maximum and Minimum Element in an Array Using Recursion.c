#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    if (n == 0) return;
    if (arr[n - 1] < *min) *min = arr[n - 1];
    if (arr[n - 1] > *max) *max = arr[n - 1];
    findMinMax(arr, n - 1, min, max);
}

int main() {
    int arr[100], n, min, max;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];
    findMinMax(arr, n, &min, &max);
    printf("Minimum: %d, Maximum: %d\n", min, max);

    return 0;
}
