#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find the Kth largest element
int findKthLargest(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Traverse the array
    for (int i = 0; i < arr.size(); i++) {
        minHeap.push(arr[i]);

        // Keep only k largest elements in the heap
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    // The top element is the kth largest
    return minHeap.top();
}

int main() {
    int n, k;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    // Validate k
    if (k <= 0 || k > n) {
        cout << "Invalid value of k!" << endl;
        return 0;
    }

    int result = findKthLargest(arr, k);

    cout << "The " << k << "th largest element is: " << result << endl;

    return 0;
}