#include <stdio.h>

int main() {
    int arr[100], n, evenCount = 0, oddCount = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;
}
