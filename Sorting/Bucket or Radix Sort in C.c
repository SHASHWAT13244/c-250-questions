#include <stdio.h>
#define SIZE 5
void radixSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    for (int exp = 1; max/exp > 0; exp *= 10) {
        int output[n], count[10] = {0};
        for (int i = 0; i < n; i++) count[(arr[i]/exp)%10]++;
        for (int i = 1; i < 10; i++) count[i] += count[i-1];
        for (int i = n-1; i >= 0; i--) {
            output[count[(arr[i]/exp)%10]-1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for (int i = 0; i < n; i++) arr[i] = output[i];
    }
}
int main() {
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    radixSort(arr, SIZE);
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    return 0;
}
