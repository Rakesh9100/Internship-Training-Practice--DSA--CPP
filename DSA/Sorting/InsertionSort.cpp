// Program to implement Insertion Sort

#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5] = {4, 2, 1, 5, 3};
    int n = 5;
    
    for(int i = 1; i < 5; i++) {
        int temp = arr[i];
        int j = i-1;
        
        while (j >= 0 && temp <= arr[j]) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;

        
        for(int i = 0;i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
