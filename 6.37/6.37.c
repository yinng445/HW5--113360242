#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int max = recursiveMaximum(arr, size - 1);
    return arr[size - 1] > max ? arr[size - 1] : max;
}

int main() {
    int arr[] = {2, 8, 3, 5, 12, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum value in the array: %d\n", recursiveMaximum(arr, size));
    system("pause");
    return 0;
}


