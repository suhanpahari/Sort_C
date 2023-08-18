#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Element not found
}

int main() {
    int sorted_array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(sorted_array) / sizeof(sorted_array[0]);
    int target_element = 11;

    int result = binary_search(sorted_array, size, target_element);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
