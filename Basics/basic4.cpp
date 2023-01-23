/* Program to find the find the odd occuring element, if there is an array with all elements appearing even times except one number
arr[] = {12, 12, 14, 90, 14, 14, 14}
Output: 90
*/

#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int n) {

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans ^= arr[i];
    }
    return ans;

}

int main() {
    
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The odd occuring element is :" << endl << find(arr, n);
    return 0;

}
