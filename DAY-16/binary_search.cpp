#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Element found
        if (arr[mid] == target) {
            return mid;
        }

        // Search in right half
        else if (arr[mid] < target) {
            start = mid + 1;
        }

        // Search in left half
        else {
            end = mid - 1;
        }
    }

    // Element not found
    return -1;
}

int main() {

    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found";
    }

    return 0;
}