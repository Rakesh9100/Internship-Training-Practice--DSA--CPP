/*
Input: 5
Output:
# # # # #
# # # #
# # #
# #
#
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;

    cout << endl;
    
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "#" << " ";
        }
        cout << endl;
    }
    return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1), Constant Space
