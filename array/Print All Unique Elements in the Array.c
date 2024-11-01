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

    printf("Unique elements in the array:\n");
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
