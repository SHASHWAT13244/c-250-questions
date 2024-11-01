#include <stdio.h>

int main() {
    int arr[100], n, freq[100] = {0};

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] != 0) {
            printf("%d: %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0;  // Mark as counted
        }
    }

    return 0;
}
