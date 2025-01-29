#include <stdio.h>
int binarySearch(int arr[], int n, int x) {
    int left = 0;   
    int right = n - 1;  
    while (left <= right) {
        int mid = left + (right - left) / 2; 
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; 
    int n = sizeof(arr) / sizeof(arr[0]);     
    int x = 23; 

    int result = binarySearch(arr, n, x);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}