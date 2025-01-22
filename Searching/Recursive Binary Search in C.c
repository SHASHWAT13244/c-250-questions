#include <stdio.h>
#define SIZE 5
int recursiveBinarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return recursiveBinarySearch(arr, mid + 1, right, target);
    return recursiveBinarySearch(arr, left, mid - 1, target);
}
int main() {
    int arr[SIZE] = {1, 3, 5, 7, 9}, target;
    scanf("%d", &target);
    int result = recursiveBinarySearch(arr, 0, SIZE - 1, target);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
    return 0;
}
