#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], even[100], odd[100], n, eCount = 0, oCount = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[eCount++] = arr[i];
        } else {
            odd[oCount++] = arr[i];
        }
    }

    sort(even, eCount);
    sort(odd, oCount);

    printf("Sorted even elements:\n");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Sorted odd elements:\n");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
