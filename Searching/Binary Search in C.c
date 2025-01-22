#include <stdio.h>
#define SIZE 5
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    int arr[SIZE] = {1, 3, 5, 7, 9}, target;
    scanf("%d", &target);
    int result = binarySearch(arr, 0, SIZE - 1, target);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
    return 0;
}
