/*
Input: 5
Output:
    1
   121
  12321
 1234321
123454321
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        
        // print the spaces
        // (n-i) num of spaces
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        
        // numbers from  1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // numbers from (i-1) to 1
        for (int j = i-1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;

}
