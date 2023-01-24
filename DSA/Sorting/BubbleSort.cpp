// Program to implement Bubble Sort

#include <bits./stdc++.h>
using namespace std;

int main() {

    int arr[5] = {5, 4, 3, 1, 2};
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap (arr[j], arr[j+1]);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
