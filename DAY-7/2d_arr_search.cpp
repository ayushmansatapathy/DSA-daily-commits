#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    int target = 5;
    bool found = false;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == target) {
                cout << "Found at position: (" << i << ", " << j << ")";
                found = true;
            }
        }
    }

    if(!found) cout << "Not Found";

    return 0;
}