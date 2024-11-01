#include <stdio.h>

int main() {
    int arr[100], n, negativeCount = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    printf("Total negative elements: %d\n", negativeCount);

    return 0;
}
