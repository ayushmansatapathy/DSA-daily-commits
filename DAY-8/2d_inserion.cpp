#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int arr[3][3];

    cout << "Enter elements:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];   // insertion
        }
    }

    cout << "2D Array:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}