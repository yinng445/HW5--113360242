#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] > key) {
        return binarySearch(arr, start, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, size - 1, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    system("pause");
    return 0;
}




