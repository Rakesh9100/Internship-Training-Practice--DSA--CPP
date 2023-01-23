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
    
    int n, spaces = 0;
    cout << "Please enter a number: " << endl;
    cin >> n;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > spaces) {
                cout << "# ";
            }
            else {
                cout << "  ";
            }
        }
        spaces++;
        cout << endl;
    }
    return 0;
    
}

// Time Complexity: O(n^2)
// Space Complexity: O(1), Constant Space
