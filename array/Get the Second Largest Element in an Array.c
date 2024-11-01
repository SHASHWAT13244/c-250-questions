#include <stdio.h>

int main() {
    int arr[100], n, first, second;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -1;  // Assuming all elements are non-negative
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second != -1) {
        printf("Second largest element: %d\n", second);
    } else {
        printf("There is no second largest element.\n");
    }

    return 0;
}
