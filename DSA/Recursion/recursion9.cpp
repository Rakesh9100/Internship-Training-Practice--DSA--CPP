// Program to find subsequence subset of elements adding to given sum

#include <bits/stdc++.h>
using namespace std;

bool sub (int arr[], int n, int sum) {
    
    if (sum == 0) {
        return true;
    }

    if (n == 0) {
        return false;
    }

    if (arr[n-1] > sum) {
        return sub(arr, n-1, sum);
    }
    else {
        return sub (arr, n-1, sum) || sub (arr, n-1, sum-arr[n-1]);
    }
    
}

int main() {

    int m;
    cout << "Please enter number of elements: " << endl;
    cin >> m;

    int arr[m];
    cout << endl << "Please enter the elements of array : \n";

    for (int i = 1; i <= m; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << endl << "Please enter sum: " << endl;
    cin >> sum;

    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (sub(arr, n, sum) == true) {
        cout << "Yes, subset present for sum: " << sum << endl;
    }
    else {
        cout << "No,subset adding to " << sum << endl;
    }
    return 0;
    
}
