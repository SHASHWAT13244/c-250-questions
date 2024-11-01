#include <stdio.h>

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

    printf("Even elements:\n");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements:\n");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
