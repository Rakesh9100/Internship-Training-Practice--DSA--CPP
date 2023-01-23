/*
Input: 7
Output:
7 6 5 4 3 2 1 0
6 5 4 3 2 1 0
5 4 3 2 1 0
4 3 2 1 0
3 2 1 0
2 1 0
1 0
0
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;

    cout << endl;

    for (int i = 0; i <= n; i++) {
        for (int j = n-i; j >= 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1), Constant Space
