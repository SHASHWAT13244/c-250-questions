#include <stdio.h>

void printArray(int arr[], int n) {
    if (n <= 0) return;
    printArray(arr, n - 1);
    printf("%d ", arr[n - 1]);
}

int main() {
    int arr[100], n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    printArray(arr, n);
    printf("\n");

    return 0;
}
