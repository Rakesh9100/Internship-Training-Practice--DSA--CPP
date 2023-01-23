/*
Input: 6
Output:
1
22
303
4004
50005
600006
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        
        for (int j = 1; j <= i-2; j++) {
            cout << 0 << " ";
        }

        if (i != 1) {
            cout << i;
        }
        cout << endl;
    }
    return 0;

}
