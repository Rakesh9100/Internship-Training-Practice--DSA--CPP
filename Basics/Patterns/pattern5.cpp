/*
Input: 7
Output:
1
8 2
14 9 3
19 15 10 4
23 20 16 11 5
26 24 21 17 12 6
28 27 25 22 18 13 7
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, p, k = 1;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        p = k;
        for (int j = 1; j <= i ; j++) {
            cout << p << " ";
            p = p - (n-i+j);
        }
        cout << endl;
        k = k + 1 + (n-i);
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1), Constant Space
