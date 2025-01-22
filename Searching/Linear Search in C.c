#include <stdio.h>
#define SIZE 5
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}
int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50}, target;
    scanf("%d", &target);
    int result = linearSearch(arr, SIZE, target);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
    return 0;
}
