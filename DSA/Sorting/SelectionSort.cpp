// Program to implement Selection Sort

#include <bits./stdc++.h>
using namespace std;

int main() {

    int arr[5] = {5, 4, 1, 2, 3};
    // after 1st iteration, i had the smallest at the currect position
    // so after i-th iteration, i will have i-th position correct
    int n = 5;

    for (int i = 0; i < n; i++) {
        int min_idx = i; // min_idx = minimum index
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
                // updating my min_idx
            }
        }
        swap (arr[i], arr[min_idx]);
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
