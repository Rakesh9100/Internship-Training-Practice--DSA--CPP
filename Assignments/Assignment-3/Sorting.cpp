// Write a program to to apply insertion sort in an array. Do not hard code any value and take every value as an input. Also print the array after each iteration.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << endl << "Please enter the elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Sorting after each iteration: " << endl;
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;
        
        while (j >= 0 && temp <= arr[j]) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;

        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
