// Program to print all possible subarrays of an array

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int i, j, k, n;
    cout << "Please enter number of elements in array : \n";
    cin >> n;
    int a[n];
    
    cout << endl << "Please enter the elements of array : \n";

    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cout << endl << "Subarrays are : " << endl;
    
    for (k = 1; k <= n; k++) {
        for (i = k; i <= n; i++) {
            for (j = k; j <= i; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;

}
