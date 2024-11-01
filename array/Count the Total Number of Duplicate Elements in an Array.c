#include <stdio.h>

int main() {
    int arr[100], n, freq[100] = {0}, duplicateCount = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 100; i++) {
        if (freq[i] > 1) {
            duplicateCount += freq[i] - 1;  // Count duplicates
        }
    }

    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
