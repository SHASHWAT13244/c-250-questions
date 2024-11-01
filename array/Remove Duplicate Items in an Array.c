#include <stdio.h>

int main() {
    int arr[100], n, temp[100], k = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                break;
            }
        }
        if (j == k) {
            temp[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
