#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {

        // Element found
        if (arr[i] == target) {
            return i;
        }
    }

    // Element not found
    return -1;
}

int main() {

    int arr[] = {5, 8, 2, 10, 15};
    int size = 5;
    int target = 10;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}