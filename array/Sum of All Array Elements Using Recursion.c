#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[100], n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = sumArray(arr, n);
    printf("Sum of all elements: %d\n", total);

    return 0;
}
