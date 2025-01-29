#include <stdio.h>
int fibonacciSearch(int arr[], int n, int x) {
    int fibM2 = 0; // (m-2)'th Fibonacci number
    int fibM1 = 1; // (m-1)'th Fibonacci number
    int fibM = fibM2 + fibM1; 
    while (fibM < n) {
        fibM2 = fibM1;
        fibM1 = fibM;
        fibM = fibM2 + fibM1;
    }
    int offset = -1;
    while (fibM > 1) {
        int i = (offset + fibM2 < n - 1) ? offset + fibM2 : n - 1;
        if (arr[i] < x) {
            fibM = fibM1;
            fibM1 = fibM2;
            fibM2 = fibM - fibM1;
            offset = i;
        }
        else if (arr[i] > x) {
            fibM = fibM2;
            fibM1 = fibM1 - fibM2;
            fibM2 = fibM - fibM1;
        }
        else {
            return i;
        }
    }
    if (fibM1 && arr[offset + 1] == x) {
        return offset + 1;
    }
    return -1;
}
int main() {
    int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 85;
    int result = fibonacciSearch(arr, n, x);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}