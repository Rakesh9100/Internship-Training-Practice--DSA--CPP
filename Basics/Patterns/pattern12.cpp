/*
Butterfly Pattern:-
Input: 4
Output:

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    // upper half part
    for (int i = 1; i <= n; i++) {
        
        // i stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces -> 2*(n-i)
        for (int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
        
        // i stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // lower half part
    for (int i = n; i >= 1; i--) {
        
        // i stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces -> 2*(n-i)
        for (int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
        
        // i stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    
}
